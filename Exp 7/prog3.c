/*
    *Program: prog3.c
    *Author: Manan Gandhi
    *Date: 15/09/2023
    *Question: Program to print an array in reverse order
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for(int i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
}