/*
    *Program: prog11.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Display Fibonacci series
*/

#include <stdio.h>

int main(){
    int n, a=0, b=1, c;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d ", a);
        c = a+b;
        a = b;
        b = c;
    }
}