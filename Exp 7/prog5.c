/*
    *Program: prog5.c
    *Author: Manan Gandhi
    *Date: 15/09/2023
    *Question: Write a program to calculate matrix addition.  
*/

#include<stdio.h>

int main(){
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int arr1[n][m], arr2[n][m], res_arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Enter element [%d][%d] of array 1: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Enter element [%d][%d] of array 2: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res_arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("Resultant array: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", res_arr[i][j]);
        }
        printf("\n");
    }
}