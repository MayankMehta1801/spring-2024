#include <stdio.h>

/*
args = pointer array, integer target which is to be searched, pointer count which
will change its value to no of occurences
returns = void
function = counting number of occurence of a particular element
*/
void occurence(int* arr, int target, int* count){
    // for loop to check for occurences
    for(int i=0; i<8; i++){
        if(*(arr+i) == target){
            (*count)++;
        }
    }
}


int main(void){
    // initialising our rows M, columns N, steps K
    int m,n,k;
    
    // input 
    scanf("%d %d %d", &m, &n, &k);
    
    // initialisation of matrix status and arr
    // status will be used later 
    // we take m+2 and n+2 to make life easier 
    int arr[m+2][n+2], status[m+2][n+2];
    
    // for loop to take the matrix input
    for(int i=0; i<m+2; i++){
        for(int j=0; j<n+2; j++){
            if(i>0 && i<=m && j>0 && j<=n){
                scanf("%d", &arr[i][j]);
            }
            else{
                // assigning a garbage value to the border elements
                arr[i][j] = 2;
                status[i][j] = 2;
            }
        }
    }
    
    // steps counter 
    int steps=0;
    
    // traversing through the array
    while(steps<k){
        // traversing through the usable board
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                /*
                MAIN LOGIC OF THE PROGRAM CODE
                ->let's consider an array
                00 01 02
                10 11 12
                20 21 22
                these are the indices
                
                ->to reduce time and space used for the program we took 2 extra rows and columns on either side
                if we did not we would also have to check for 4 corner and 4 edge cases
                
                ->so our array is realistically
                xx xx xx xx xx
                xx 00 01 02 xx
                xx 10 11 12 xx
                xx 20 21 22 xx
                xx xx xx xx xx
                
                ->by doing this all of the elements have exactly 8 neighbours
                we assigned a garbage value (=2) to all the xx indices
                now we will ignore a neighbour if its value is not 0 or 1 using occurence udf 
                and thus we will always end up with perfect number of neighbours for each element
                
                -> another thing is that the value of cells is preserved for a designated step
                so we will use the status array for saving the value in next step
                and then finally change the value after all the cells have been traversed
                */
                
                // neighbour array
                int checking[8] = {arr[i-1][j-1], arr[i-1][j], arr[i-1][j+1],
                                arr[i][j-1],                    arr[i][j+1],
                                arr[i+1][j-1], arr[i+1][j], arr[i+1][j+1]
                };
                
                // pointer points to first element of array
                int* neighbours = &checking[0];
                
                // pointer for occurence
                int occurences = 0;
                int* occ = &occurences;
                
                // this checks the occurence of live cells
                occurence(neighbours, 1, &occurences);
                
                // if exactly 3 neighbours are 1 then the cell is born
                if(*occ==3){
                    status[i][j] = 1;
                }
                // if less than 2 neighbours then death
                // also if more than 3 neighbours then death
                else if(*occ < 2 || *occ > 3){
                    status[i][j] = 0;
                }
                // neutral condition for two neighbours
                else{
                    status[i][j] = arr[i][j];
                }
            }
        }
        
        // status now updates the current board
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                arr[i][j] = status[i][j];
            }
        }
        
        // increment of step counter for number of steps
        steps++;
    }
    
    // printing out the result
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// code by b23mt1030
