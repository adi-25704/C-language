#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
    int num1,num,i;
    scanf("%d",&num1);
    num=num1;
    i= prime(num);
    while(num/i!=0)
    {
    if(num1%i==0)
    {
        printf("%d",i);
        num1=num1/i;
    }
    else
    {
        i= prime(num);
    }
    return 0;
    }
}
int prime(int num)
{
    int j,n=1;
    static int i=1;
    while(n<=num)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
            {
                return i;
            }
        i++;
    }
} 