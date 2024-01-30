#include <stdio.h>

// to print the fibonacci series
int main(void){
    // we ask how many terms does the user want
    int num, ans=1;
    scanf("%d", &num);
    // we initialise the first two terms of the series
    int term1 = 0, term2 = 1;
    // we print out the first two terms
    printf("%d, %d, ", term1, term2);
    
    /*
    logic of the code -
    basically the next term of fibonacci series is equal to the sum of prev two
    therefore we initialised first two terms of the code explicitly
    */
    // we iterate through the loop for the total number of terms
    for(int i; i<=num; i++){
        // the next term is the sum of the prev two
        ans = term1 + term2;
        // now that term1 has been added, the new 2nd last value becomes term2's current value
        term1 = term2;
        // and term2 takes up the last value, ie, ans
        term2 = ans;
        
        // now we print out the ans
        printf("%d, ", ans);
    }

    return 0;
}
// code by B23MT1030
