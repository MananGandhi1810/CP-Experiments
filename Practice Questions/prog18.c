/*
    *Program: prog18.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Check Armstrong number
*/

#include <stdio.h>

int main(){
    int n, original, sum = 0, a;
    printf("Enter n: ");
    scanf("%d", &n);
    original = n;
    while(n>0){
        a = n % 10;
        sum += a * a * a;
        n /= 10;
    }
    if(original==sum){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
}