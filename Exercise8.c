//program to print total marks and percentage of a student
#include<stdio.h>
#include<conio.h>
int main()
{
    float m1,m2,m3,m4,m5,tot_marks,percentage;
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    tot_marks = (m1+m2+m3+m4+m5);
    percentage = (m1+m2+m3+m4+m5)/5;
    printf("%f is the aggregate marks obtained by him.\n",tot_marks);
    printf("%f is the percentage marks obtained by him.\n",percentage);
    return 0;
}