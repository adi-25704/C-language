//To compute the mean of five numbers(Exercise3)
#include <stdio.h>
int main()
    {
        int n1,n2,n3,n4,n5,mean;
        printf("Enter five numbers: ");
        scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
        mean=(n1+n2+n3+n4+n5)/5;
        printf("The mean of five numbers is: %d",mean);
        return 0;
    }