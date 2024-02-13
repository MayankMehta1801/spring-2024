#include<stdio.h>

int main()
{
    // taking in the input
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    // we make two different arrays in order to save order of occurence
    // we also make two counting variables
    int pos[100], neg[100], zero[100], count_p=0, count_n=0, count_z=0;
    
    /*
    LOGIC 
    so basically it runs from i to n
    we also have counters for positive, negative and zeroes in the program
    what we do is we check for all three conditions (>0, <0, ==0)
    atleast one condition is satisfied and we add the element in that array
    we also ++ the counter
    this way we get 3 arrays in that same order
    */
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            pos[count_p] = arr[i];
            count_p++;
        }
        else if(arr[i]<0){
            neg[count_n] = arr[i];
            count_n++;
        }
        else{
            zero[count_z] = arr[i];
            count_z++;
        }
    }
    
    // after getting the array now we print it one by one negatve first
    // zero second
    // positive third and last
    for(int i=0; i<count_n; i++){
        printf("%d ", neg[i]);
    }
    for(int i=0; i<count_z; i++){
        printf("%d ", zero[i]);
    }
    for(int i=0; i<count_p; i++){
        printf("%d ", pos[i]);
    }
    
    return 0;
}
// code by b23mt1030
