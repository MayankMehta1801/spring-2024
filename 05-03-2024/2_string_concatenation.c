#include <stdio.h>
#include <string.h>

/*
arguments = character pointers arr1, arr2 which are inputs and arr3 which is 
destination, integer pointer array index for storing indices for execution
returns = void
function = concatenates and prints out a string
*/
void concatenation(char *arr1, char *arr2, char *arr3, int* index){
    // initialisation of i and j which are size variables 
    // k = 0 for for loop
    int i = strlen(arr1) - 1, j = strlen(arr2) - 1, k = 0;
    
    // index_1 signifies arr1
    // index_2 sinifies arr2
    int index_1=0, index_2=0;
    
    // for loop runs for the length of the two strings combined
    for(k=0; k<(i+j); k++){
        // if the indexing is less than i then arr1 element gets added
        if(k<i){
            *(arr3+k) = *(arr1+index_1);
            index_1++;
            continue;
        } 
        // otherwise j element or arr2 element gets added
        else{
            *(arr3+k) = *(arr2+index_2);
            index_2++;
            continue;
        }
    }
    
    index[0] = index_1;
    index[1] = index_2;
    index[2] = k;
}


int main(void){
    // initialising two input arrays
    char input_1[300];
    char input_2[300];
    
    // initialising the destination array
    char output[300];
    
    // initialising pointers for each array
    char *arr3 = &output[0];
    
    // fgets function for input 
    // it returns a pointer so we assign fgets directly 
    char* arr1 = fgets(input_1, 100, stdin);
    char* arr2 = fgets(input_2, 100, stdin);
    
    // pointer for storing indices
    int indices[3];
    int *index = &indices[0];
    
    // function call
    concatenation(arr1, arr2, arr3, index);
    
    // we access the indices using this array
    int index_1 = indices[0];
    int index_2 = indices[1];
    int k = indices[2];
    
    // printing out the inputs
    for(int p=0; p<index_1; p++){
        printf("%c", *(arr1+p));
    }
    printf("\n");
    for(int p=0; p<index_2; p++){
        printf("%c",*(arr2+p));
    }
    // now printing the output
    printf("\n");
    for(int p=0; p<k; p++){
        printf("%c", *(arr3+p));
    }
    
}

// code by b23mt1030
