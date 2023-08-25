/*
    *Program: prog14.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Calculate the power of a number
*/

#include <stdio.h>

int main(){
    int n, a;
    printf("Enter n: ");
    scanf("%d", &n);

    while (n > 0){
        a = n % 10;
        printf("%d\n", a * a);
        n /= 10;
    }
}