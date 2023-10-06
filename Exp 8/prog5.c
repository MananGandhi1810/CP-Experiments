/*
    *Program: prog5.c
    *Author: Manan Gandhi
    *Date: 22/09/2023
    *Question: Write a program to find the word from the given sentence
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);
    if(strstr(str, word)){
        printf("Word found");
    }
    else{
        printf("Word not found");
    }
}