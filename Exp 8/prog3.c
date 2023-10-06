/*
    *Program: prog3.c
    *Author: Manan Gandhi
    *Date: 22/09/2023
    *Question: Write a program to reverse a string without using inbuilt functions
*/

#include <stdio.h>

int main(){
    char str[100];
    char revstr[100] = "";
    printf("Enter a string: ");
    scanf("%s", str);
    int len = 0;
    for (len = 0; str[len] != '\0'; len++)
        ;
    for (int i = 0; i < len; i++){
        revstr[i] = str[len - i - 1];
    }
    printf("Reversed: %s", revstr);
}