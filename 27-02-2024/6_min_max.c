#include <stdio.h>

/*
args = array arr, integer size of array
returns = pointer ptrMin which is the index of min value
*/
int ptrMin(int arr[], int size){
    // initialising a min integer 
    int min = 0;
    // pointer pointing to min
    int *ptr_min = &min;
    // loop for checking the minimum
    for(int i=0; i<size; i++){
        if(arr[*ptr_min]>arr[i]){
            min = i;
        }
    }
    // returning our pointer element
    return *ptr_min;
}

/*
args = array arr, integer size of array
returns = pointer ptrMax to the max element 
*/
int ptrMax(int arr[], int size){
    // initialising a max integer
    int max = 0;
    // pointer pointing to max 
    int *ptr_max = &max;
    // loop for checking the maximum
    for(int i=0; i<size; i++){
        if(arr[*ptr_max]<arr[i]){
            max = i;
        }
    }
    // returning our pointer element 
    return *ptr_max;
}

int main(void){
    // input
    int num;
    scanf("%d", &num);
    // array initialisation
    int arr[num];
    // array input
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    // printing our result 
    printf("%d", ptrMin(arr,num)-ptrMax(arr,num));
}
