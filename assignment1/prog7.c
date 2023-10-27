// Develop a program to perform divisibility test by 3 and 5. If the entered number is divisible by 3 and not 5, print "Three". If the number is not divisible by 3 and divisible by "Five", print 5. If the number is divisible by both 3 and 5, print "Both". If the number is not divisible by both 3 and 5, print the number "Not Divisible".

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 3 == 0 && num % 5 == 0){
        printf("Both\n");
    }
    else if(num % 3 == 0){
        printf("Three\n");
    }
    else if(num % 5 == 0){
        printf("Five\n");
    }
    else{
        printf("Not Divisible\n");
    }
    return 0;
}