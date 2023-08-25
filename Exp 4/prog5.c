/*
 * Program: prog5.c
 * Author: Manan Gandhi
 * Date: 11/08/2023
 * Question: Write a menu driven program to perform add/subtract/multiply/divide based on the user's choice. The user will indicate the operation to be performed using the signs i.e. + for addition, - for subtraction and so on.
 */

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    char operation;
    printf("Enter operation: ");
    scanf("%c", &operation);
    printf("Enter num1 and num2: ");
    scanf("%d %d", num1, num2);
    switch (operation){
    case '+':
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0){
            printf("Division by zero is not possible!");
            break;
        }
        printf("%d / %d = %d", num1, num2, num1 / num2);
        break;
    default:
        printf("Invalid operation!");
    }
}