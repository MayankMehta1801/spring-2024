#include <stdio.h>
#include <math.h>

/*
arguments = float pointers a,b,c (sides of triangle), float pointer area
returns = void
function = calculates area using heron's formula
*/
void Area(float *a, float *b, float *c, float *area){
    float s = (*a +*b +*c)/2;
    *area = sqrt(s * (s-(*a)) * (s-(*b)) * (s-(*c)));
}

/*
arguments = float pointers a,b,c (sides of triangle), float pointer perimeter
returns = void
function = calculates perimeter by simple addition
*/
void Perimeter(float *a, float *b, float *c, float *perimeter){
    *perimeter = *a + *b + *c;
}

/*
triangle struct
3 attributes: float a, float b, float c (sidelengths of the triangle)
*/
struct triangle{
    float a;
    float b;
    float c;
};

int main(void){
    // defining a variable t with struct triangle
    struct triangle t;
    
    // now we define and assign pointers to this triangle variable
    float *a = &t.a;
    float *b = &t.b;
    float *c = &t.c;
    
    // defining area pointer
    float area_triangle;
    float *area = &area_triangle;
    
    // defining perimeter pointer
    float perimeter_triangle;
    float *perimeter = &perimeter_triangle;
    
    // taking input of the three sides
    scanf("%f %f %f", &t.a, &t.b, &t.c);
    
    // function calls
    Area(a,b,c,area);
    Perimeter(a,b,c,perimeter);
    
    // printing our output
    printf("Area is: %f\nPerimeter is: %f",*area, *perimeter);

    return 0;    
}

// code by b23mt1030
