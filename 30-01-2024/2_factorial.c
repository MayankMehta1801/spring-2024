#include <stdio.h>

// program to give factorial
int main(void){
    // initialising num for input and fact is going to be our output
    int num, fact=1;
    scanf("%d", &num);
    // loop iterates through an integer i and multiplies the incrementing values of i 
    // to fact
    for(int i=1; i<=num; i++){
        fact *= i;
    }
    // we print it nicely in the end
    printf("%d! = FACTORIAL(%d) = %d",num,num,  fact);

    return 0;
}
// code by B23MT1030
