#include <stdio.h>

// program to give factorial
int main(void){
    // initialising num for input and fact is going to be our output
    int num, fact=1;
    scanf("%d", &num);
    
    // if num is negative it returns -1
    if (num<0) { 
        fact = -1;
    }
    
    // 0! = 1
    if (num == 0){
        fact = 1;
    }
    
    // if number is positive
    if (num>0){
      // loop iterates through an integer i and multiplies the incrementing values of i 
        // to fact
        for(int i=1; i<=num; i++){
            fact *= i;
    }  
    }
    
    // we print it nicely in the end
    printf("%d", fact);

    return 0;
}
// code by B23MT1030
