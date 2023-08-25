/*
    * Program: prog6.c
    * Author: Manan Gandhi
    * Date: 18/08/2023
    * Question: Write a program to calculate simple interest.
*/

#include <stdio.h>

int main(){
    int p, r, t, si;
    printf("Enter principal, rate and time: ");
    scanf("%d %d %d", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("Simple interest = %d\n", si);
}