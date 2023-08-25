/*
    * Program: prog2.c
    * Author: Manan Gandhi
    * Date: 28/07/2023
    * Question: Write a program to calculate area of circle, triangle and rectangle.
*/

#include <stdio.h>

void main(){
    int length, breadth, radius, base, height;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);

    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    printf("Enter base of triangle: ");
    scanf("%d", &base);

    printf("Enter height of triangle: ");
    scanf("%d", &height);

    double area_rectangle = length * breadth;
    double area_circle = 3.14 * radius * radius;
    double area_triangle = 0.5 * base * height;

    printf("Area of rectangle: %lf\n", area_rectangle);
    printf("Area of circle: %lf\n", area_circle);
    printf("Area of triangle: %lf\n", area_triangle);
}