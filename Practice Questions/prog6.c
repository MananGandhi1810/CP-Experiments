/*
    *Program: prog6.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Check whether a number is positive, negative or zero
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n>0){
        printf("Positive");
    }
    else if(n<0){
        printf("Negative");
    }
    else{
        printf("Zero");
    }
}