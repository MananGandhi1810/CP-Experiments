/*
    * Program: prog3.c
    * Author: Manan Gandhi
    * Date: 04/08/2023
    * Question: Write a program to exchange values of two variables without using 3rd variable.
*/

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}