/*
    *Program: prog9.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Find factorial of a number
*/

#include <stdio.h>

int main(){
    int n, fact=1;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    printf("%d", fact);
}