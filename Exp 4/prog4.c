/*
    * Program: prog4.c
    * Author: Manan Gandhi
    * Date: 11/08/2023
    * Question: Write a program to check whether a year is leap year or not.
*/

#include <stdio.h>

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if(year%4==0 && (year%400==0 || year%100!=0)){
        printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}