/*
    *Program: prog12.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Count number of digits in a number
*/

#include <stdio.h>

int main(){
    int n, digits = 0;
    printf("Enter n:");
    scanf("%d", &n);
    while(n>0){
        digits++;
        n /= 10;
    }
    printf("%d", digits);
}