#include <stdio.h>

int gcd(int x, int y){
    // checking if one of them is zero or not
    // gcd of zero and non zero is a non zero number
    if(x==0 && y != 0){
        return y;
    }
    
    // same condition here
    if(x!=0 && y==0){
        return x;
    }
    
    // if both are zero we return zero
    if(x==0 && y==0){
        return x;
    }
    
    // if both are equal then we return that same number
    if(x==y){
        return x;
    }
    
    // end condition is if the remainder is zero then we return 
    // the divisor 
    if(x % y == 0){
        return y;
    }
    
    // temporary variable to assign values
    int temp;
    
    // basic swapping
    temp = y;
    y = x % y;
    x = temp;
    
    // recursive call
    gcd(x,y);
}

int main(void){
    // taking in the input
    int m,n;
    scanf("%d %d", &m,&n);
    // this is the result
    int result;
    
    // checking which number is bigger
    if(m>n){
        result = gcd(m,n);
    }
    else{
        result = gcd(n,m);
    }
    
    // finally printing out the result
    printf("%d", result);
}

// code by b23mt1030
