/*
    *Program: prog19.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Display factors of a number
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(n%i == 0){
            printf("%d ", i);
        }
    }
}