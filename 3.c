#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    for(int count=1,i=2;count<=20;i++)
    {
        for(int temp=1,d=temp;d<=20;d++)
        {
            if((i%d)==0)
            {
                temp++;
            }
            else
            {
                if(i%i==0)
                {
                    temp++;
                }
                else
                {
                printf("%d,",i);
                count++;
                temp++;
                }
            }
        }
        
    }
    return 0;
}

