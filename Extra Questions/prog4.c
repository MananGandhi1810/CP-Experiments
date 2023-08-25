/*
    * Program: prog4.c
    * Author: Manan Gandhi
    * Date: 04/08/2023
    * Question: Given the value of x, y and z. Write a program to rotate their values such that x has the value of y, y has the value of z and z has the value of x.
*/

#include <stdio.h>

int main(){
    int x, y, z;
    printf("Enter value of x, y and z: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Before rotation:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    int temp = x;
    x = y;
    y = z;
    z = temp;
    printf("After rotation:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    return 0;
}