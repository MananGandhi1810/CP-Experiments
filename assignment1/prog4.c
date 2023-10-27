// Write a program to multiply each element of an array by 5 and display the resultant array

#include <stdio.h>

int main(){
    int arr[10], i;
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    printf("The resultant array is: ");
    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]*5);
    }
    printf("\n");
    return 0;
}