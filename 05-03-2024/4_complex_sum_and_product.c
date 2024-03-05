// Online C compiler to run C program online
#include <stdio.h>

#define ll long long 

struct complex
{
    float real;
    float imaginary;
};

struct complex Sum(struct complex num1, struct complex num2){
    struct complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}

struct complex Product(struct complex num1, struct complex  num2){
    struct complex product;
    product.real = num1.real*num2.real - num1.imaginary*num2.imaginary;
    product.imaginary = num1.real*num2.imaginary + num1.imaginary*num2.real;
    return product;
}

int main() {
    struct complex num1, num2;
    scanf("%f %f %f %f",&num1.real,&num1.imaginary,&num2.real,&num2.imaginary);
    struct complex s = Sum(num1, num2);
    struct complex p = Product(num1, num2);
    printf("Sum= %.2f + %.2fi\nProduct= %.2f + %.2fi",s.real,s.imaginary,p.real,p.imaginary);
    return 0;
}
