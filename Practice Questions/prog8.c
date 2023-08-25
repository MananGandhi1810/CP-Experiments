/*
    *Program: prog8.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Find the sum of natural numbers
*/

#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        sum += i;
    }
    printf("%d", sum);
}