/*
    *Program: prog3.c
    *Author: Manan Gandhi
    *Date: 06/10/2023
    *Question: There are 50 computers in an office. Every computer has following information CPU type, hard disk size. WAP to store details of all 50 computers and then print details of computers having hard disk size greater than 8 GB. 
*/

#include <stdio.h>

struct computer
{
    char cpu_type[20];
    int hard_disk_size;
};

int main()
{
    struct computer c[50];
    int i;
    for (i = 0; i < 50; i++)
    {
        printf("Enter the CPU type: ");
        scanf("%s", c[i].cpu_type);
        printf("Enter the hard disk size: ");
        scanf("%d", &c[i].hard_disk_size);
    }
    printf("\nComputers with hard disk size greater than 8 GB are: ");
    for (i = 0; i < 50; i++)
    {
        if (c[i].hard_disk_size > 8)
        {
            printf("\n%s", c[i].cpu_type);
        }
    }
    return 0;
}