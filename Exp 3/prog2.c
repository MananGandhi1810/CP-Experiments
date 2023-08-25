/*
    * Program: prog2.c
    * Author: Manan Gandhi
    * Date: 04/08/2023
    * Question: Write a program to find greatest of three numbers.
*/

#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int greatest = (a > b && a > c) ? a : ((b > a && b > c) ? b : c);
    printf("%d is greatest", greatest);
}