#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
    int guessnumber,userguess;
    printf("welcome to number guessing game");
    printf("guess the number between 1 to 100\n");
    srand(time(0));
    guessnumber=rand()%100+1;
    do{
    printf("enter your guess:");
    scanf("%d",&userguess);
    if(userguess>guessnumber)
       printf("Too high! Try a lower number.\n");
    else if(userguess<guessnumber)
       printf("Too low! Try a higher number.\n");
    else
        printf("congratulations!you guessed correctly./n");
    }while(userguess!=guessnumber);
return 0;
}
