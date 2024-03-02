/*
33.33/100
*/
#include <stdio.h>

#define ll long long 
#define MAXN 10


ll determinant(int mat[MAXN][MAXN], int n);


ll findDeterminant(int mat[][MAXN], int n) {
    return determinant(mat, n);
}

int row_mul(int times){
    int mul = 1;
    for(int i=0; i<times; i++){
        mul *= -1;
    }
    return mul;
}


ll determinant(int mat[MAXN][MAXN], int n) {
    int deter = 0;
    for(int loop=0; loop<n; loop++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(n==2){
                    return row_mul(i)*mat[i][j]*mat[i+1][j+1] - mat[i+1][j]*mat[i][j+1];
                }
                else{
                    return determinant(mat, n-1);
                }
            }
        }
    }
    return deter;
}


int main() {
    int n;
    scanf("%d", &n);
    int mat[MAXN][MAXN];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    ll det = findDeterminant(mat, n);
    printf("%lld", det);


    return 0;
}
