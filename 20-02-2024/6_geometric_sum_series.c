#include <stdio.h>

// global sum variable
// sum is our output
// any is a placeholder which will be divided with each recursion
double sum=0, any=1;

double geometricSum(int n){
    // we add the sum in the start
    sum += any;
    
    // if n is zero then we return the sum
    if(n==0){
        return sum;
    }
    
    // we divide our placeholder by 3
    any /= 3;
    
    // recursive call
    geometricSum(n-1);
}

int main(void){
    // input
    int num;
    scanf("%d", &num);
    
    // output
    printf("%0.5lf", geometricSum(num));
}

// code by b23mt1030
