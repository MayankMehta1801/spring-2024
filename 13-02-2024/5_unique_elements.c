#include<stdio.h>
/*
args = array of size n, integer k, integer n (sizeof array)
returns = 1 if element is not unique, 0 otherwise 
*/
int check(int unq[n], int k, int n){
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            return 1;
        }
    }
    return 0;
}

int main()
{
    // input part
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    // another array for adding unique elements
    int unique[n], count=0;
    
    // checking whether it is unique or not
    for(int i=0; i<n; i++){
        if(check(unique, arr[i], n) == 0){
            unique[i] = arr[i];
            count++;
        }
    }
    
    // printing out our result
    printf("%d", count);
    return 0;
}

// code by b23mt1030
