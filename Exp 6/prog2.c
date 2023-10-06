/*
    Program: prog2.c
    Author: Manan Gandhi
    Date: 24/09/2023
    Question: Write a function for converting a temperature from Fahrenheit scale to Celsius scale (Function will not accept any parameter and with no return value).
*/

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
void convertToFahrenheitToCelsius() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Conversion formula: Celsius = (Fahrenheit - 32) * 5/9
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("Temperature in Celsius: %.2f\n", celsius);
}

int main() {
    // Call the function to perform the temperature conversion
    convertToFahrenheitToCelsius();

    return 0;
}
