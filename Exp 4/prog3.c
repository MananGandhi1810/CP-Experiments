/*
    * Program: prog3.c
    * Author: Manan Gandhi
    * Date: 11/08/2023
    * Question: Write a program to check whether an integer is positive, negative or zero.
*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num>0){
        printf("Positive");
    }
    else if(num==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
    return 0;
}