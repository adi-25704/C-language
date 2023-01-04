//Program to find the sum of the digits of a four digit number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,dig1,dig2,dig3,dig4,sum;
    scanf("%d",&num1);
    dig4= num1%10;
    dig3= ((num1-dig4)/10)%10;
    dig2= ((num1- dig3*10-dig4)/100)%10;
    dig1=((num1- dig2*100- dig3*10- dig4)/1000)%10;
    sum= dig1+dig2+dig3+dig4;
    printf("%d is the sum of the digits of the number %d \n",sum,num1);
    return 0;
}