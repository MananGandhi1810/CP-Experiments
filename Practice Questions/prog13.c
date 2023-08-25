/*
    *Program: prog13.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Questions: Reverse a number
*/

#include <stdio.h>

int main(){
    int n, rev = 0, a;
    printf("Enter n: ");
    scanf("%d", &n);
    while(n>0){
        a = n % 10;
        rev = rev * 10 + a;
        n /= 10;
    }
    printf("%d", rev);
}