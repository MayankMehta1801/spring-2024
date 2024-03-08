#include <stdio.h>

#define ff float 

/*
parameters = floats length and width
*/
struct rectangle
{
  ff length;
  ff width;
};

/*
arguments = struct rectangle element
returns = float 
function = returns the area float of a rectangle struct
*/
ff Area(struct rectangle rect){
    return (ff)(rect.length * rect.width);
}

/*
arguments = struct rectangle element
returns = float 
function = returns the perimeter float of a rectangle struct
*/
ff Perimeter(struct rectangle rect){
    return (ff)(2*(rect.length + rect.width));
}

int main(void){
    // initialising a rectangle struct
    struct rectangle rect;
    
    // input of the length and width of the rectangle
    scanf("%f %f",&rect.length, &rect.width);
    
    // printing out the area and perimeter
    printf("Area of the rectangle: %.2f\nPerimeter of the rectangle: %.2f", Area(rect), Perimeter(rect));
}

// code by b23mt1030
