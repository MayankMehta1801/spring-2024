#include<stdio.h>

int main()
{
    // first taking in the input of the no of elements and window size
    int n,k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    // we initialise a sum which we will run across the loop
    int sum = 0;
    // we also initialise an avg for iterating
    float avg=0;
    // a huge array to store values
    float ans[100];
    /*
    LOGIC
    lets take example of array of 8 elements
    0 1 2 3 4 5 6 7 8 
    with window of 4
    at a time we take 4 elements
    0123, 1234, 2345, 3456, 4567
    we stop at 4 since after that array index is not available
    we basically move from 0 to n-k
    that is our i
    
    secondly since the window is 4 we iterate a new int j from 0 to 4
    we add the i+jth element to the sum
    then we divide it by k
    then we add it to a new ans array
    
    at the end we print it all out using that ans array
    */
    for(int i=0; i<n-k+1; i++){
        for(int j=0; j<k; j++){
            sum += arr[i+j];
        }
        avg = (float) sum / k;
        ans[i] = avg;
        sum = 0;
    }
    
    for(int i=0; i<n-k+1; i++){
        printf("%.3f ", ans[i]);
    }
    
    return 0;
}
// code by b23mt1030
