/*
    Program: prog3.c
    Author: Manan Gandhi
    Date: 24/09/2023
    Question: Write a program to find the value of y using a recursive function, where y = x raised to the power n.
*/

#include <stdio.h>

// Recursive function to calculate x raised to the power n
double power(double x, int n) {
    if (n == 0) {
        return 1; // x^0 is always 1
    } else if (n < 0) {
        // Handle negative exponent by taking reciprocal
        return 1.0 / (x * power(x, -n - 1));
    } else {
        return x * power(x, n - 1);
    }
}

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    double result = power(x, n);

    printf("%.2lf raised to the power %d is %.2lf\n", x, n, result);

    return 0;
}
