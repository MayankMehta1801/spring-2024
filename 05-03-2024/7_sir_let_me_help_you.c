#include <stdio.h>

// we define a macro true = 1 and false = 0 for better understanding
#define true 1
#define false 0

/*
arguments = pointer x, pointer y
returns = void
function = swaps two variables without using a temp variable
*/
void swap(int *x, int* y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

/*
arguments = pointer array, integer array size
returns = void
function = sorts an array using bubble sort
*/
void bubbleSort(int* arr, int size){
    // 0 = false and 1 = true as defined in macro 
    int swapped = false;
    
    // traversing through the elements
    // we use size-1 to accomodate the increment in inner loop
    for(int i=0; i<size-1; i++){
        // swapped is false in every iteration
        swapped = false;
        
        // inner loop running from 0 to size-i-1
        // again -1 is for accomodating for increment
        for(int j=0; j<size-i-1; j++){
            // if the current element is greater than the next we swap it
            if(*(arr+j) > *(arr+j+1)){
                swap((arr+j), (arr+j+1));
                // swapped is true
                swapped = true;
            }
        }
        
        // if no element has been swapped that means array is now sorted
        // therefore we break
        if(swapped == false){
            break;
        }
    }
}

int main(void){
    // input of size
    int num;
    scanf("%d", &num);
    
    // array initialisation
    int arr[num];
    
    // input of array
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    /*
    if we need to use swap, we will use bubble sort 
    */
    bubbleSort(&arr[0], num);
    
    // after sorting we print the array
    for(int i=0; i<num; i++){
        printf("%d ", arr[i]);
    }
}

// code by b23mt1030
