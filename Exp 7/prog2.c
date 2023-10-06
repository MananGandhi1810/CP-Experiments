/*
    *Program: prog2.c
    *Author: Manan Gandhi
    *Date: 15/09/2023
    *Question: Write a program to find the largest of ‘n’ numbers taken from the user. 
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

    int largest = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    printf("Largest: %d", largest);
}