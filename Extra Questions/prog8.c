/*
    * Program: prog8.c
    * Author: Manan Gandhi
    * Date: 18/08/2023
    * Question: A four-digit number is inputted through the keyboard. Write a program to calculate sum of digits of a number.
*/

#include <stdio.h>

int main(){
    int num, sum = 0;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    for(int i = 0; i < 4; i++){
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits = %d\n", sum);
}