/*
    * Program: prog3.c
    * Author: Manan Gandhi
    * Date: 04/08/2023
    * Question: Write a program that takes one integer number as input, assign its value to another variable with pre and post increment operators and display its value.
*/

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = ++a;
    printf("Value of b after pre increment operation: %d\n", b);
    b = a++;
    printf("Value of b after post increment operation: %d\n", b);
    printf("Value of a after post increment operation: %d\n", a);
    return 0;
}