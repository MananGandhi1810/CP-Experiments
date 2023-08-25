/*
    *Program: prog7.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Check whether a character is alphabet
*/

#include <stdio.h>

int main(){
    char c;
    printf("Enter character: ");
    scanf("%c", &c);
    int i = (int)c;
    if((i>=65 && i<=90) || (i>=97 && i<=122)){
        printf("Alphabet");
    }
    else{
        printf("Not an alphabet");
    }
}