#include <stdio.h>

#define ff float


/*
parameters = roll number, name, marks in 3 subjects, average
*/
struct Student
{
    int roll_number;    // roll number
    char name[20];     // name of student (pointer for fgets)
    ff sub_1;   // marks in subject 1
    ff sub_2;   // marks in subject 2
    ff sub_3;   // marks in subject 3
    ff *avg;    // average float pointer
};

/*
arguments = struct student pointer s
returns = void
function = to calculate average and store it in the avg pointer of struct
*/
void CalculateAverage(struct Student *s){
    float average = (s->sub_1 + s->sub_2 + s->sub_3)/3;
    s->avg = &average;
}

/*
arguments = struct student pointer s
returns = void
function = used to display student details (roll number and avg)
*/
void DisplayStudentDetails(struct Student *s){
    printf("Roll Number: %d\nAverage Marks: %.3f\n\n", s->roll_number, *(s->avg));
}

int main(void){
    // input of length of array
    int num;
    scanf("%d",&num);
    
    // initialisation of array
    struct Student arr[num];

    // input of array
    for(int i=0; i<num; i++){
        scanf("%d %s", &(arr[i].roll_number), &(arr[i].name[0]));
        scanf("%f %f %f",&(arr[i].sub_1), &(arr[i].sub_2), &(arr[i].sub_3));
    }
    
    // calculating the size of the array
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // now we display the output
    for(int i=0; i<num; i++){
        CalculateAverage(&arr[i]);
        DisplayStudentDetails(&arr[i]);
    }
}

// code by b23mt1030
