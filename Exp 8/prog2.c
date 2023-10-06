/*
    *Program: prog2.c
    *Author: Manan Gandhi
    *Date: 22/09/2023
    *Question: Write a program to accept a string and find its length without using the string header file.
*/

#include <stdio.h>

int main()
{
    int len = 0;
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length: %d", len);
    return 0;
}