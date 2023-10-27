// Write a program to find and display odd and even numbers from an array. (1D, separately)

#include <stdio.h>

int main(){
    int arr[10], i;
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    printf("The odd numbers are: ");
    for(i = 0; i < 10; i++){
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
    printf("\nThe even numbers are: ");
    for(i = 0; i < 10; i++){
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}