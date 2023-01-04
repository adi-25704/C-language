//Program to calculate gross salary from basic salary of an employee
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
     float basic_salary,gross_salary,dearness_allowance,house_rent_allowance;
     scanf("%f",&basic_salary);
     dearness_allowance= 0.4*basic_salary;                                      //computing dearness allowance
     house_rent_allowance= 0.2*basic_salary;                                    //computing house rent allowance
     gross_salary= basic_salary+dearness_allowance+house_rent_allowance;        //computing gross salary
     printf("%f is the gross salary",gross_salary);
     return 0;
}