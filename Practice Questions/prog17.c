/*
    *Program: prog17.c
    *Author: Manan Gandhi
    *Date: 25/08/2023
    *Question: Display prime numbers between two intervals
*/

#include <stdio.h>

int main(){
    int a, b, flag;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    for(int i=a; i<=b; i++){
        flag = 0;
        for(int j=2; j<=i/2; j++){
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d ", i);
        }
    }
}