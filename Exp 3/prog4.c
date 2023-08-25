/*
    * Program: prog4.c
    * Author: Manan Gandhi
    * Date: 04/08/2023
    * Question: Write a program to find the greatest of three numbers using conditional operator.
*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is greatest", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greatest", b);
    }
    else
    {
        printf("%d is greatest", c);
    }
}