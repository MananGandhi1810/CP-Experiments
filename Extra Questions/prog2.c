/*
    * Program: prog2.c
    * Author: Manan Gandhi
    * Date: 04/08/2023
    * Question: Write a program to read your details lke age, name, gender, city, height, etc and display it.
*/

#include <stdio.h>

int main(){
    int age;
    char name[25];
    char gender[10];
    char city[25];
    float height;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gender: ");
    scanf("%s", gender);
    printf("Enter your city: ");
    scanf("%s", city);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %s\n", gender);
    printf("City: %s\n", city);
    printf("Height: %.2fcm", height);
    return 0;
}