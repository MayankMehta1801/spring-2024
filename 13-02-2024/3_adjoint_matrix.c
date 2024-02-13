#include <stdio.h>

// Function to get elements of the matrix as input
void getMatrixInput(int mat[3][3]) {
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to find the adjoint of a 3x3 matrix
void findAdjoint(int mat[3][3], int adj[3][3]) {
    // let cij be minor of element
    // basically hard coded the entire minor thing
    int c00, c01, c02, c10, c11, c12, c20, c21, c22;
    c00 = mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1];
    c01 = mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0];
    c02 = mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0];
    c10 = mat[0][1]*mat[2][2] - mat[0][2]*mat[2][1];
    c11 = mat[0][0]*mat[2][2] - mat[0][2]*mat[2][0];
    c12 = mat[0][0]*mat[2][1] - mat[0][1]*mat[2][0];
    c20 = mat[0][1]*mat[1][2] - mat[0][2]*mat[1][1];
    c21 = mat[0][0]*mat[1][2] - mat[0][2]*mat[1][0];
    c22 = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
    
    // now we assign the matrix
    // once more hard coding it 
    adj[0][0] = c00;
    adj[0][1] = -1*c10;
    adj[0][2] = c20;
    adj[1][0] = -1*c01;
    adj[1][1] = c11;
    adj[1][2] = -1*c21;
    adj[2][0] = c02;
    adj[2][1] = -1*c12;
    adj[2][2] = c22;
    
}


// Function to output elements of the matrix
void printMatrix(int mat[3][3]) {
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    //Declare two 3*3 array, one for matrix and another for adjoint
    int matrix[3][3], adjoint[3][3];

    // Call function to get matrix input elements
    getMatrixInput(matrix);
    
    // Call function to Calculate the adjoint of the matrix
    findAdjoint(matrix, adjoint);
    
    // Output the adjoint matrix
    printMatrix(adjoint);

    return 0;
}
// code by b23mt1030
