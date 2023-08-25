/*
    * Program: prog2.c
    * Author: Manan Gandhi
    * Date: 11/08/2023
    * Question: Write a C program to accept a float number and display the integer part using typecasting.
*/

#include <stdio.h>

int main(){
    float a;
    int b;
    printf("Enter a float number: ");
    scanf("%f", &a);
    b = (int)a;
    printf("Integer part is %d", b);
    return 0;
}