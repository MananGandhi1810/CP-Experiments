/*
    * Program: prog3.c
    * Author: Manan Gandhi
    * Date: 28/07/2023
    * Question: Write a program to evaluate the following expressions and display their results
    * (a) 2x^3 + x^2 + 2x + 3
    * (b) x + y^2 + z^3
*/

#include <stdio.h>

void main(){
    int x, y, z;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    printf("Enter value of z: ");
    scanf("%d", &z);

    int a = 2 * x * x * x + x * x + 2 * x + 3;
    int b = x + y * y + z * z * z;

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
}