/*
    * Program: prog1.c
    * Author: Manan Gandhi
    * Date: 04/08/2023
    * Question: Write a program to initialize your details like age, name, gender, city, height, etc and display them.
*/

#include <stdio.h>

int main(){
    int age = 16;
    char name[25] = "Manan Gandhi";
    char gender[10] = "Male";
    char city[25] = "Mumbai";
    float height = 180;
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %s\n", gender);
    printf("City: %s\n", city);
    printf("Height: %.2fcm", height);
    return 0;
}