/*
    *Program: pro4.c
    *Author: Manan Gandhi
    *Date: 22/09/2023
    *Question: Write a program to implement 10 inbuilt string functions
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100]="", str2[100]="";
    int i, len = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    printf("Length of string: %d\n", len);
    strcpy(str2, str);
    printf("Copied string: %s\n", str2);
    int compared = strcmp(str, str2);
    printf("Compared string: %d\n", compared);
    strcat(str, str2);
    printf("Concatenated string: %s\n", str);
    printf("First occurence of 'a': %s\n", strchr(str, 'a'));
    strncpy(str2, str, 5);
    str2[5] = '\0';
    printf("Copied string until 5 characters: %s\n", str2);
    printf("Last occurence of 'a': %s\n", strrchr(str, 'a'));
    strncat(str, str2, 5);
    printf("Concatenated string until 5 characters: %s\n", str);
    printf("Compared string until 5 characters: %d\n", strncmp(str, str2, 5));
    strrev(str);
    printf("Reversed string: %s\n", str);
    return 0;
}