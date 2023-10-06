/*
    Program: prog1.c
    Author: Manan Gandhi
    Date: 24/09/2023
    Question: Write a program to find the GCD of two numbers using a function.
*/

#include <stdio.h>

// Function to find the GCD of two numbers
int findGCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return findGCD(num2, num1 % num2);
    }
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int gcd = findGCD(num1, num2);

    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
