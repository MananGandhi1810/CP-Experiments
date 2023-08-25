/*
    *Program: prog4.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Find all roots of a quadratic equation
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float d, x1, x2;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b*b - 4*a*c;
    if(d<0){
        printf("Imaginary roots");
    }
    else if(d==0){
        x1 = -b/(2*a);
        printf("Roots are equal and are %f", x1);
    }
    else{
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("Roots are %f and %f", x1, x2);
    }
    return 0;
}