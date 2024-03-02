#include<stdio.h>
#include<math.h>

/*
arguments= float 1, float 2, number of steps
returns= void
function= carries out all the conditions given in problem statement
*/
void modifyValue(float *val1, float *val2, int *mysteps){
    //ADD Logic based on question here. Don't forget to call this function recursively
    // increment of steps pointer
    *mysteps = *mysteps + 1;
    if(*mysteps == 8){
        return;
    }
    
    // taking absolute value for second pointer at the start itself
    *val2 = fabs(*val2);

    // temporary variable to check for digit in val2
    int temp2 = fabs(*val2);
    
    // base case/ return condition
    if(temp2 == 0){
        return;
    }
    
    // condition 1:- first float divided by 2
    *val1 /= 2;
    int temp1 = (int) *val1 % 10;  // another int check for digits
    
    // condition 2:- 0 to 5 or 6 to 9
    if(temp1 >=0 && temp1 <= 5){
        *val2 = pow(*val2, 0.5);
    }
    if(temp1 >= 6 && temp1 <= 9){
        *val2 = pow(*val2, 0.25);
    }
    
    float temp = *val1;
    *val1 = *val2;
    *val2 = temp;
    
    // recursive function call
    modifyValue(val1, val2, mysteps);
}
int main(){
	float myval1, myval2;
	int steps=0;
	scanf("%f%f", &myval1,&myval2);
	//Declare two pointers that can point to type float and one pointer that can point to int
	//and assign addresses accordingly
	float* val1 = &myval1;
	float* val2 = &myval2;
	int* mysteps = &steps;
	
	//Pass these pointers to the modifyvalue function, such that
	//first argument is the pointer to first value
	//second argument is the pointer to second value
	//third argument is the pointer to integer variable steps
	modifyValue(val1, val2, mysteps);
	
	//Printing the values
	printf("%d %d", (int)myval1, (int)myval2);
}

// code by b23mt1030
