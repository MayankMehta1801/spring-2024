#include <stdio.h>
#include <stdlib.h>

#define FOR(i,n) for(int i=0; i<n; i++)
#define and &&

struct triangle
{
    int a,b,c;
    float area;
};

/*
arguments = struct triangle
returns = void
function = calculate area of triangle by herons formula
*/
void herons(struct triangle* t){
    float s = ((float)t->a + (float)t->b + (float)t->c)/2;
    t->area = s * (s - t->a) * (s - t->b) * (s - t->c);
}

int main(void){
    // input of size
    int num;
    scanf("%d", &num);
    
    // array initialisation
    struct triangle* arr = (struct triangle*)malloc(num*sizeof(struct triangle));
    
    // input of array
    FOR(i, num){
        scanf("%d %d %d", &(arr+i)->a, &(arr+i)->b, &(arr+i)->c);
        herons(arr+i); // calculation of area
    }
    
    // insertion sort
    int j;
    struct triangle key;
    for(int i=1; i<num; i++){
        key = *(arr+i);
        j = i-1;
        while(j>=0 and (arr+j)->area > key.area){
            *(arr+j+1) = *(arr+j);
            j--;
        }
        *(arr+j+1) = key;
    }
    
    // printing our output
    FOR(i, num){
        printf("%d %d %d\n", (arr+i)->a, (arr+i)->b, (arr+i)->c);
    }
}
