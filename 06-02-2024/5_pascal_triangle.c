#include <stdio.h>
int main(void){
    // making a pascal triangle

    // we generate a matrix of no of rows = input
    // taking the input
    int n;
    scanf("%d", &n);
    int pascal[n][n];
    
    // we will use a loop to basically put 1 at the start and end of each row
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            pascal[i][j] = 1;
        }
        printf("\n");
    }

    

    /*
    LOGIC
    in pascal triangle, for the ith element of nth row
    it is equal to sum of i-1th and ith element of n-1th row 
    we will use that logic through a 2d matrix 
    */

   // now lets apply the logic

   // this loop runs i from 2 since first two rows are 1 only
   // now j runs from 1 to i since 0 index of j is also 1
   for(int i=2; i<n; i++){
    for(int j=1; j<i; j++){
        // this is the central logic
        pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
    }
    printf("\n");
   }

    // printing the triangle
   for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
}

// code by b23mt1030
