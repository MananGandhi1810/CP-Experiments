/*
    * Program: prog5.c
    * Author: Manan Gandhi
    * Date: 18/08/2023
    * Question: Write a program to find area & perimeter of a circle
*/

#include <stdio.h>

int main(){
    int radius, area, circumference;
    printf("Enter radius: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area = %d\n", area);
    printf("Circumference = %d\n", circumference);
}