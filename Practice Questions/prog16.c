/*
    *Program: prog16.c
    *Author: Manan Gandhi
    *Date: 25/0/2023
    *Question: Check whether a number is prime or not
*/

#include <stdio.h>

int main(){
    int n, i, flag = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=2; i<n; i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }

    if(flag==0){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
}