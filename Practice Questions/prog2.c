/*
    *Program: prog2.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Check whether a character is vowel or consonant
*/

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E'|| ch=='I' || ch=='O' || ch=='U'){
        printf("%c is a vowel", ch);
    }
    else{
        printf("%c is a consonant", ch);
    }
    return 0;
}