/*
Write a C program that declares a structure named Point to represent a point
in 2D space. The structure should have two members: x and y, representing
the coordinates of the point. Then, write a function called distance that takes
two pointers to Point structures as parameters and calculates the Euclidean
distance between them. Finally, in the main function, create two Point
structures, initialize them with some coordinates, and print the distance
between them using the distance function. It's mandatory to use the template
code which has some missing parts and that needs to be completed.
Input: 4 numbers (x1,y1,x2,y2) in one line

Output: a single float value upto 2 decimal places (%.2f) as euclidean
distance.
*/
#include <stdio.h>
#include <math.h>

#define ll long long 

struct Point
{
    float x;
    float y;
};

float distance(struct point* point1, struct point* point2){
    float diff_x = point1->x - point2->x;
    float diff_y = point1->y - point2->y;
    float dist = sqrt(pow(diff_x,2)+pow(diff_y,2));
    return dist;
}

int main() {
    struct Point p1,p2;
    struct Point* point1 = &p1;
    struct Point* point2 = &p2;
    scanf("%f %f %f %f",&point1->x,&point1->y,&point2->y,&point2->y);
    printf("Distance = %.2f",distance(point1, point2));
}
