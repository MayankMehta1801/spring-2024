#include <stdio.h>
#include <stdlib.h>

/*----Macros----*/
#define INPUT(arr,n) for(int i=0; i<n; i++){scanf("%d", &arr[i]);}
#define SIZE(arr) sizeof(arr)/sizeof(arr[0])
#define PRINT(arr) for(int i=0; i<(sizeof(arr)/sizeof(int)); i++){printf("%d ", arr[i]);}
#define FOR(i,n) for(int i=0; i<n; i++)

/*
arguments = pointer array, min, max and integer size of array
returns = void
function = calculating min and max of a particular array
*/
void MinMax(int* arr, int* min, int* max, int size){
    *min = *arr;
    *max = *arr;
    FOR(i, size){
        if(*(arr+i) > *max){
            *max = *(arr+i);
        }
        if(*(arr+i) < *min){
            *min = *(arr+i);
        }
    }
}

int main(void){
    // input of array size
    int num;
    scanf("%d", &num);

    // dynamic memory allocation for array
    int* arr = malloc(num*sizeof(int));

    // input of array
    INPUT(arr, num);

    // initialising our min and max
    int min = 0, max = 0;

    // function call through address of min and max 
    MinMax(arr, &min, &max, num);

    // printing out our result
    printf("%d %d", min, max);

    // freeing our dynamically allocated space
    free(arr);
}
