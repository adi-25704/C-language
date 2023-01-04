//Program to print first 15 Fibonacci numbers.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int x,y,z,num1=-1,num2=0,temp1=1,temp2=-1,count=1;
    scanf("%d\n%d\n%d",&x,&y,&z);
    do
    {
        
        num1=temp2;                     //Exchanging value of previous second number in previous first number.
        num2=temp1;                     //Exchanging value of new number in previous second number.
        num1=num1+num2;                 //Adding the numbers.
        temp1=num1;                     //exchanging values of new number in first temporary variable.
        temp2=num2;                     //exchanging values of previous second number in second temporary variable.
        printf("%d",num1);              //printing the numbers.
        count++;                        //Incrementing the counter.
        if(count<=15 && count>=2)
        {
            printf(",");
        }
    }while(count<=15);
    return 0;
}