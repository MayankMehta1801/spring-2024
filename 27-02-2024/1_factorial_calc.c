#include <stdio.h>

#define ll long long 

/*
arguments = int n (the number whose factorial will be taken), 
pointer f (storage variable)
returns = void
function = calculation of factorial using pointers
*/
void factorial(int n, ll *f){
    // initialising the value as 1
    *f = 1;
    
    // for loop to calculate the factorial
    for(int i=1; i<=n; i++){
        *f *= i;
    }
}

int main(void){
    // input 
    int num;
    scanf("%d", &num);
    
    // long long integer fact
    ll fact;
    
    // calling the function; we pass the address of fact as our argument
    factorial(num, &fact);
    
    // printing out the result
    printf("%lld", fact);
    
}

// code by b23mt1030
