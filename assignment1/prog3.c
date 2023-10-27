// Write a C program to print prime numbers between N1 and N2, where N2>N1.

#include <stdio.h>

int main(){
    int n1, n2, i, j, flag;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for(i = n1; i <= n2; i++){
        if(i == 1 || i == 0)
            continue;
        flag = 1;
        for(j = 2; j <= i/2; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}