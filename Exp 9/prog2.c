/*
    *Program: prog12.c
    *Author: Manan Gandhi
    *Date: 06/10/2023
    *Question: Define structure called cricket that will describe the following data Player name, country name, no of matches played & batting avg. Develop a program that store information of 10 players and display names of players having batting average greater than 50.
*/

#include <stdio.h>

struct cricket
{
    char player_name[20];
    char country_name[20];
    int matches_played;
    float batting_avg;
};

int main(){
    struct cricket c[10];
    int i;
    for(i=0;i<10;i++){
        printf("Enter the player name: ");
        scanf("%s", c[i].player_name);
        printf("Enter the country name: ");
        scanf("%s", c[i].country_name);
        printf("Enter the matches played: ");
        scanf("%d", &c[i].matches_played);
        printf("Enter the batting average: ");
        scanf("%f", &c[i].batting_avg);
    }
    printf("\nPlayers with batting average greater than 50 are: ");
    for(i=0;i<10;i++){
        if(c[i].batting_avg>50){
            printf("\n%s", c[i].player_name);
        }
    }
    return 0;
}