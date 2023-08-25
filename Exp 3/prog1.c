/*
    * Program: prog1.c
    * Author: Manan Gandhi
    * Date: 04/08/2023
    * Question: Write a program to convert temperature in Fahrenheit to Celsius. 
*/

#include<stdio.h>

int main(){
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5/9;
    printf("Temperature in Celsius: %.2f", celsius);
    return 0;
}