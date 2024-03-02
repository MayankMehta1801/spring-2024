#include <stdio.h>

/*
arguments= int size (sizeof array), arr pointer, arrsum pointer
returns= void
function= adds up the array elements
*/
void sumOfArray(int size, int *arr, int *arrsum){
    *arrsum = 0;
    
    // computing the sum using for loop
    for(int i=0; i<size; i++){
        *arrsum += arr[i];
    }
}

int main(void){
    // input
    int num;
    scanf("%d", &num);
    
    // array initialisation
    // we assume an integer array
    int arr[num];
    
    // array input
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    
    // initialisation of sum element
    int aSum;
    
    // function call
    sumOfArray(num, arr, &aSum);
    
    // now we print out the result
    printf("%d", aSum);
}

// code by b23mt1030
