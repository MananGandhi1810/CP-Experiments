/*
    *Program: prog1.c
    *Author: Manan Gandhi
    *Date: 15/09/2023
    *Question: Write a program to accept ‘n’ integers from the user into an array and display the count of even and odd numbers of these. 
*/

#include<stdio.h>

int main(){
    int n, even = 0, odd = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even: %d\nOdd: %d", even, odd);
}