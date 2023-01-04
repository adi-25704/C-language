//To find the gross salary of an employee from his basic salary(Exercise5)
#include <stdio.h>
#include <conio.h>
int main()
    {
        float basic_salary,gross_salary,dearness_allowance,house_rent_allowance;
        scanf("%d",&basic_salary);
        dearness_allowance= 0.4*basic_salary;
        house_rent_allowance= 0.2*basic_salary;
        gross_salary= basic_salary+dearness_allowance+house_rent_allowance;
        printf("%f is the gross salary",gross_salary);
        return 0;
    }