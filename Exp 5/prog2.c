/*
    *Program: prog2.c
    *Author: Manan Gandhi
    *Date: 18/08/2023
    *Question: Write a program to find the sum of digits of a number
*/

#include <stdio.h>

int main(){
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while(number != 0){
        sum += number % 10;
        number /= 10;
    }
    printf("Sum of digits is %d", sum);
}