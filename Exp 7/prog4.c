/*
    *Program: prog4.c
    *Author: Manan Gandhi
    *Date: 15/09/2023
    *Question: Program to calculate average of an array 
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

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("Average: %f", (float)sum / n);
}