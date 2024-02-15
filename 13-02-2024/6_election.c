#include <stdio.h>
int main(void){
    int num;
    scanf("%d", &num);
    int arr[num], arr2[num-1], arr3[num-2];
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i=0; i<num; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=1; i<num; i++){
        arr2[i-1] = arr[i];
    }
    max = arr2[0];
    for(int i=0; i<num-1; i++){
        if(max<arr2[i]){
            max = arr2[i];
        }
    }
    for(int i=1; i<num; i++){
        arr3[i-1] = arr[i];
    }
    max = arr3[0];
    for(int i=0; i<num-2; i++){
        if(max<arr3[i]){
            max = arr3[i];
        }
    }
    
    for(int i=0; i<num; i++){
        if(max == arr[i]){
            printf("%d", i);
        }
    }
}

// code by b23mt1030
