/*
    * Program: prog7.c
    * Author: Manan Gandhi
    * Date: 18/08/2023
    * Question: Write a program to convert temperature in Fahrenheit to Celsius
*/

#include <stdio.h>

int main(){
    int f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in Celsius = %d\n", c);
}