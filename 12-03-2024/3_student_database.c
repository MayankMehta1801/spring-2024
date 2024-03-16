#include <stdio.h>
#include <stdlib.h>

#define FOR(i,n) for(int i=0; i<n; i++)

/*
parameters = student id and marks in a subject
*/
struct Student
{
    int student_id;
    float subject;
};

int main(void){
    // input of number of students
    int num;
    scanf("%d", &num);
    
    // array initialisation
    struct Student* arr = (struct Student*)malloc(sizeof(struct Student)*num);
    
    // array input
    FOR(i,num){
        scanf("%d %f",&(arr+i)->student_id, &(arr+i)->subject);
    }
    
    // avg initialisation
    float avg = 0;
    
    // calculation of float
    FOR(i, num){
        avg += ((arr+i)->subject)/num;
    }
    
    // printing the result
    printf("%.2f", avg);
}
