/*
    *Program: prog1.c
    *Author: Manan Gandhi
    *Date: 18/08/2023
    *Question: Write a program to find the factorial of a number.
*/

#include <stdio.h>

int main(){
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    printf("Factorial of %d is %d", n, fact);
    return 0;
}