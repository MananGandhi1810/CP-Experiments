/*
    *Program: prog3.c
    *Author: Manan Gandhi
    *Date: 18/08/2023
    *Question: Write a program to display first n elements of fibonacci series
*/

#include <stdio.h>

int main(){
    printf("Enter number of terms: ");
    int n, a = 0, b = 1, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}