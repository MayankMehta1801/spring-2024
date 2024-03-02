#include <stdio.h>


/*
args = pointer arr, size (size of array), index 
returns = void
what it does = it takes in an array and prints its reverse
*/
void revArray(int* arr, int size, int index){
    // base case is if index is not greater then size
    // since its a void function therefore we execute the function
    // inside if condition
    if(index <= size){
        /*
        if an array has 5 elements 
        indices:- 0 1 2 3 4 5
        variable index = 0
        therefore size-index = 5-0=5
        we input size as array's size - 1 for indexing purposes only
        so size-index = 4-0 = 4 and last element gets printed first
        and so on and so forth
        */
        printf("%d ", arr[size-index]);
        
        // recursive call
        revArray(arr, size, index+1);
    }
}

int main(void){
    // input
    int num;
    scanf("%d", &num);
    
    // creating the array 
    int arr[num];
    
    // array input
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    
    // our function call
    revArray(arr, num-1, 0);
}


// code by b23mt1030
