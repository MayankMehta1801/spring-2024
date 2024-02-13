#include <stdio.h>
int main(void){
    // taking the input of rows and columns 
    // constraint: 1 <= n,m <= 10
    int n,m;
    scanf("%d %d", &n, &m);

    // we initialise the transpose matrix
    int transpose[m][n];

    // taking input of the matrix
    // we assign the reverse value in this loop itself
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &transpose[j][i]);
        }
        printf("\n");
    }

    // now we print the transpose
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d " , transpose[i][j]);
        }
        printf("\n");
    }




}
// code by b23mt1030
