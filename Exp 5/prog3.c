/*
    *Program: prog3.c
    *Author: Manan Gandhi
    *Date: 18/08/2023
    *Question: Write a program to print pattern using for loop
        1
        12
        123
        1234
        12345
*/

#include <stdio.h>

int main(){
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}