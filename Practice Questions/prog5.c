/*
    *Program: prog5.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Check whether an entered number is a leap year or not
*/

#include <stdio.h>

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
}