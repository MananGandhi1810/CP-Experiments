/*
    *Program: prog15.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Check whether a number is palindrome or not
*/

#include <stdio.h>

int main(){
    int n, original, rev, a;
    printf("Enter n: ");
    scanf("%d", n);
    original = n;

    while(n>0){
        a = n % 10;
        rev = rev * 10 + a;
        n /= 10;
    }

    if(rev==original){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}