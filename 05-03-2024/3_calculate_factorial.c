/*
Write a program to find the factorial of a given number. Create 2 variables n and factorial
in the main function. Then create a function with void return type that takes the two
variables as parameters, calculates the factorial of n, and stores the result in the factorial
variable. Note that you'll have to pass a pointer to the factorial variable in the function
parameters, in order to store the result in that variable (Pass by reference).
Then print the factorial value from the main function.
Input: A single line that contains an integer n (1 <= n <= 20).
Output: A single integer - the factorial of the number n.
*/
#include <stdio.h>

#define ll long long 

void calculateFactorial(int* n, ll* fact){
    *fact = 1;
    for(int i=1; i<=*n; i++){
        *fact *= i;
    }
}

int main() {
    int num;
    int* n = &num;
    ll factorial;
    ll* fact = &factorial;
    
    scanf("%d", &num);
    
    calculateFactorial(n, fact);
    
    printf("%lld", *fact);
}
