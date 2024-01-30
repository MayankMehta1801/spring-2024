#include <stdio.h>

// to check for primes
int main(void){
    // first of all we initialise and take the input of the variable
    // we also initialise a flag value set to 1
    int num, flag=1;
    scanf("%d", &num);
    
    // 0 and 1 are neither prime nor composite
    // we need to check for it first before iterating
    if(num == 0 || num == 1) printf("NOT A PRIME");
    
    else{
        // now we check whether the number is odd or even
        if(num % 2 == 0){
            // if it is even we can directly divide by 2 and then iterate it through half its range
            for(int i=2; i<=num/2; i++){
                // if the number is not prime it will give zero remainder at atleast one point 
                if(num%i==0){
                    printf("NOT A PRIME");
                    // flag is now set to false
                    flag = 0;
                    // we will break the loop in such a case
                    break;
                }
            }
            // if flag is true then its prime if 0 its not
            if(flag==1) printf("PRIME");
        }
        
        // similar situation in case of odd numbers but we will do num+1 to get a clean for loop
        else if(num % 2 != 0){
            // for odd num+1
            for(int i=2; i<=(num+1)/2; i++){
                // if the number is not prime it will give zero remainder at atleast one point 
                if(num%i==0){
                    printf("NOT A PRIME");
                    // flag set to 0 for false
                    flag = 0;
                    // we will break the loop in such a case
                    break;
                }
                
            }
            // if flag is true then its prime if 0 its not
            if(flag==1) printf("PRIME");
        }
        
        // if the user enters banana instead of a number
        else{
            printf("INVALID INPUT");
        }
    }
    return 0;
}
// code by B23MT1030
