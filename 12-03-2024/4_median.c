#include <stdio.h>
#include <stdlib.h>

#define SIZE(n) sizeof(int)*n
#define FOR(i,n) for(int i=0; i<n; i++)
#define and &&

/*
arguments = 2 array pointers and arrays size
returns = int
function = merges the second array into the first, sorts them and then returns the median
*/
int mergeAndmedian(int* arr1, int* arr2, int num){
    arr1 = (int*)realloc(arr1, SIZE(2*num));
    FOR(i, num){
        *(arr1+num+i) = *(arr2+i);
    }
    
    // freeing array 2
    free(arr2);
    
    // sorting the new merged array using insertion sort
    int j, key;
    for(int i=1; i<2*num; i++){
        key = *(arr1+i);
        j = i-1;
        while(j>=0 and *(arr1+j)>key){
            *(arr1+j+1) = *(arr1+j);
            j--;
        }
        *(arr1+j+1) = key;
    }
    
    // now we find and return the median
    return (int)(*(arr1+num-1) + *(arr1+num))/2;
}

int main(void){
    // input of size
    int num;
    scanf("%d", &num);
    
    // dynamically allocating arrays
    int* arr1 = (int*)malloc(SIZE(num));
    int* arr2 = (int*)malloc(SIZE(num));
    
    // arrays input
    FOR(i,num){
        scanf("%d", arr1+i);
    }
    FOR(i,num){
        scanf("%d", arr2+i);
    }
    
    // now we call the median function and print our output
    printf("%d", mergeAndmedian(arr1, arr2, num));
}
