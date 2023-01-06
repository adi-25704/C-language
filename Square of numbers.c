#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(i=j;i<=(2*i-1);i++)
        {
            printf("%d \n",i);

        }
        printf("%d",j);
    }
    return 0;
}