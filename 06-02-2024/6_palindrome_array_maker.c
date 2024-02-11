#include <stdio.h>
int main(void){
    // taking input of number of elements
    int n;
    scanf("%d", &n);
    
    // we initialise the array of 2n-1 elements
    int arr[2*n - 1];
    // input
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    /*
    LOGIC
    basically we take a mid point which is explained by an example
    0 1 2 3 4 5 6
    here mid point is 3rd index (this is an array for input of 3)
    for palindrome: values for 2nd and 4th index are same 
    so basically a distance of 1 from midpoint
    similarly, values for 1 and 5 as well (distance of 2)
    
    so we can equate the mid+i element to be equal to mid-i element to get palindrome
    where i is basically len(array)-1
    */
    
    // we initialise the mid point of the array
    int mid = n-1;
    // and here is the loop!
    for(int i=1; i<n; i++){
        arr[mid+i] = arr[mid-i];
    }

    // we print out the array nicely at the end
    for(int i=0; i<2*n-1; i++){
        printf("%d ", arr[i]);
    }
}

// code by b23mt1030
