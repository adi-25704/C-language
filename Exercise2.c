//To add and subtract two numbers x and y(Exercise2)
#include <stdio.h>
#include <conio.h>
int main()
    {
        int x,y;
        printf("Enter two numbers: ");
        scanf("%d %d",&x,&y);
        printf("The Addition of two numbers is: %d + %d = %d\n",x,y,x+y);
        printf("The Subtraction of two numbers is: %d - %d = %d",x,y,x-y);
        return 0;
    }