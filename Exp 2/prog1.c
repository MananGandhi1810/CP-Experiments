/*
    * Program: prog1.c
    * Author: Manan Gandhi
    * Date: 28/07/2023
    * Question: Write a program to print employee details like employee number, name, address and phone number.
*/

#include <stdio.h>

void main(){
    long emp_num, phone_num;
    char name[20];
    char address[500];

    printf("Enter employee number: ");
    scanf("%Ld", &emp_num);

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter employee phone number: ");
    scanf("%Ld", &phone_num);

    printf("Enter employee address: ");
    scanf("%s", address);

    printf("Employee number: %d\n", emp_num);
    printf("Employee name: %s\n", name);
    printf("Employee phone number: %d\n", phone_num);
    printf("Employee address: %s\n", address);
}