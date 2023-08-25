/*
    *Program: prog1.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Check whether a given number is even or odd
*/

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num%2==0){
        printf("%d is even", num);
    }
    else{
        printf("%d is odd", num);
    }
    return 0;
}