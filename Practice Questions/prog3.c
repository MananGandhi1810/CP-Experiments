/*
    *Program: prog3.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Find the largest number among three numbers
*/

#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("%d is the largest number", a);
    }
    else if(b>a && b>c){
        printf("%d is the largest number", b);
    }
    else{
        printf("%d is the largest number", c);
    }
    return 0;
}