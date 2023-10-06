/*
    *Program: prog1.c
    *Author: Manan Gandhi
    *Date: 22/09/2023
    *Question: Write a program to accept a string and:
        i) Display its length
        ii) Copy it to another string and display the new string
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100], str2[100];
    int i, len = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    printf("Length of string: %d\n", len);
    strcpy(str2, str);
    printf("Copied string: %s\n", str2);
    return 0;
}