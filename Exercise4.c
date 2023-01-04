//Evaluate the expressions
#include <stdio.h>
int main()
    {
        int a,b,c,d,e,x,y,z,B,g,v,exp1,exp2,exp3;
        float exp4;
        scanf("%d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&x,&y,&z,&B,&g,&v);
        exp1= 3*x*x+2*x+5;                                                              //Expression 1
        exp2= (a+b+c)/(d+e);                                                            //Expression 2
        exp3= ((2*B*y)/(d+1))-(x/(3*(z+y)));                                            //Expression 3
        exp4= (2*v+6.22*(c+d))/(g+v);                                                   //Expression 4
        printf("Evaluation of Equation1 : %d \n",exp1);
        printf("Evaluation of Equation2 : %d \n",exp2);
        printf("Evaluation of Equation3 : %d \n",exp3);
        printf("Evaluation of Equation4 : %f \n",exp4);
        return 0;
    }