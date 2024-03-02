#include <stdio.h>

int occurence(int arr[], int target){
    int count = 0;
    for(int i=0; i<8; i++){
        if(arr[i] == target){
            count++;
        }
    }
    return count;
}


int main(void){
    // initialising our rows M, columns N, steps K
    int m,n,k;
    // input 
    scanf("%d %d %d", &m, &n, &k);
    // initialisation of matrix
    int arr[m][n];
    // for loop to take the matrix input
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    // counter 
    int counter=0;
    
    // traversing through the array
    while(counter<k){
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                /*
                let's consider an array
                00 01 02
                10 11 12
                20 21 22
                if i and j are greater than zero and less than the last row/column
                then only we can check all around the element
                here for element 11 a total of 8 elements will be checked
                */
                if(i>0 && j>0 && i<m-1 && j<n-1){
                    // this array contains 8 elements
                    int checking[8] = {arr[i-1][j-1], arr[i-1][j], arr[i-1][j+1], 
                                    arr[i][j-1], arr[i][j+1],
                                    arr[i+1][j-1], arr[i+1][j], arr[i+1][j+1]
                    };
                    // if 2 or 3 live cells are present the cell stays alive
                    if(occurence(checking,1) == 2 || occurence(checking,1)==3){
                        // we will also check for cell birth
                        // if exactly 3 live cells are there then a cell is live again
                        if(occurence(checking,1)==3){
                            arr[i][j] = 1;
                        }
                    }
                    // else the cell is dead
                    else{
                        arr[i][j] = 0;
                    }
                
                }
                
                /*
                corner conditions
                there are 4 corners which we need to check as well
                1- i=0 j=0
                2- i=m-1 j=0
                3- i=0 j=n-1
                4- i=m-1 j=n-1
                */
                
                // corner 1 i=0 j=0
                if(i==0 && j==0){
                    int checking[3] = {arr[0][1],
                                        arr[1][0], arr[1][1]
                    };
                    // if 2 or 3 are alive
                    if(occurence(checking,1)==2 || occurence(checking,1)==3){
                        // checking for exactly 3 as well
                        if(occurence(checking,1)==3){
                            arr[i][j] = 1;
                        }
                    }
                    // else dead cell
                    else{
                        arr[i][j] = 0;
                    }
                }
                
                // corner 2 i=m-1 j=0
                if(i==m-1 && j==0){
                    int checking[3] = {arr[m-2][0], arr[m-2][1], 
                                                    arr[m-1][1]
                    };
                    // if 2 or 3 are alive
                    if(occurence(checking,1)==2 || occurence(checking,1)==3){
                        // checking for exactly 3 as well
                        if(occurence(checking,1)==3){
                            arr[i][j] = 1;
                        }
                    }
                    // else dead cell
                    else{
                        arr[i][j] = 0;
                    }
                }
                
                // corner 3 i=0 j=n-1
                if(i==0 && j==n-1){
                    int checking[3] = {arr[0][n-2],
                                        arr[1][n-2], arr[1][n-1]
                    };
                    // if 2 or 3 are alive
                    if(occurence(checking,1)==2 || occurence(checking,1)==3){
                        // checking for exactly 3 as well
                        if(occurence(checking,1)==3){
                            arr[i][j] = 1;
                        }
                    }
                    // else dead cell
                    else{
                        arr[i][j] = 0;
                    }
                }
                
                // corner 4 i=m-1 j=n-1
                if(i==m-1 && j==n-1){
                    int checking[3] = {arr[m-2][n-2], arr[m-2][n-1],
                                     arr[m-1][n-2]};
                    // if 2 or 3 are alive
                    if(occurence(checking,1)==2 || occurence(checking,1)==3){
                        // checking for exactly 3 as well
                        if(occurence(checking,1)==3){
                            arr[i][j] = 1;
                        }
                    }
                    // else dead cell
                    else{
                        arr[i][j] = 0;
                    }
                }
                
                /*
                edge conditions
                we need 4 different types of edges we need to check 
                1- 0<i<m-1 and j=0
                2- 0<i<m-1 and j=n-1
                3- i=0 and 0<j<n-1
                4- i=m-1 and 0<j<n-1
                */
                
                // edge 1 0<i<m-1 and j=0
                if(i>0 && i<m-1 && j==0){
                    int checking[6] = {arr[i-1][0], arr[i+1][1],
                                                    arr[i][1],
                                        arr[i+1][0],arr[i+1][1]
                    };
                    if(occurence(checking,1)==2 || occurence(checking,1)==3){
                        // cell being born condition
                        if(occurence(checking,1)==3){
                            arr[i][j] = 1;
                        }
                    }
                    else{
                        arr[i][j] = 0;
                    }
                }
                
                // edge 2 0<i<m-1 and j=n-1
                if(i>0 && i<m-1 && j==n-1){
                    int checking[6] = {arr[i-1][n-2], arr[i-1][n-1],
                                        arr[i][n-2],
                                        arr[i+1][n-2],arr[i+1][n-1]
                    };
                    if(occurence(checking,1)==2 || occurence(checking,1)==3){
                        // cell being born condition
                        if(occurence(checking,1)==3){
                            arr[i][j] = 1;
                        }
                    }
                    else{
                        arr[i][j] = 0;
                    }
                }
                
                // edge 3 i=0 and 0<j<n-1
                if(j>0 && i<n-1 && i==0){
                    int checking[6] = {arr[0][j-1], arr[0][j+1],
                                arr[1][j-1], arr[1][j],arr[1][j+1]
                    };
                    if(occurence(checking,1)==2 || occurence(checking,1)==3){
                        // cell being born condition
                        if(occurence(checking,1)==3){
                            arr[i][j] = 1;
                        }
                    }
                    else{
                        arr[i][j] = 0;
                    }
                }
                
                // edge 4 i=m-1 and 0<j<n-1
                if(j>0 && j<n-1 && i==m-1){
                    int checking[6] = {arr[n-2][j-1], arr[n-2][j], arr[n-2][j+1],
                                        arr[m-1][j-1],              arr[m-1][j+1]
                    };
                    if(occurence(checking,1)==2 || occurence(checking,1)==3){
                        // cell being born condition
                        if(occurence(checking,1)==3){
                            arr[i][j] = 1;
                        }
                    }
                    else{
                        arr[i][j] = 0;
                    }
                }
            }
        }
        counter++;
    }
    
    // printing out the result
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
