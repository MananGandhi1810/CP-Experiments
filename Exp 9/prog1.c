/*
    *Program: prog1.c
    *Author: Manan Gandhi
    *Date: 06/10/2023
    *Question: Define structure Student having data members: Roll no, name, address, branch and percentage. WAP to read and display information of a student. 
*/

#include <stdio.h>

struct Student
{
    int roll_no;
    char name[20];
    char address[20];
    char branch[20];
    float percentage;
};

int main()
{
    struct Student s1;
    printf("Enter the roll no: ");
    scanf("%d", &s1.roll_no);
    printf("Enter the name: ");
    scanf("%s", s1.name);
    printf("Enter the address: ");
    scanf("%s", s1.address);
    printf("Enter the branch: ");
    scanf("%s", s1.branch);
    printf("Enter the percentage: ");
    scanf("%f", &s1.percentage);

    printf("\nRoll no: %d", s1.roll_no);
    printf("\nName: %s", s1.name);
    printf("\nAddress: %s", s1.address);
    printf("\nBranch: %s", s1.branch);
    printf("\nPercentage: %f", s1.percentage);

    return 0;
}