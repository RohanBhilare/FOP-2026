#include<stdio.h>
void main()
{
    float basic_salary,gross_salary,net_salary,HRA,TA,PT;
    printf("Enter Basic Salary:");
    scanf("%f",&basic_salary);

    HRA=basic_salary*0.1;
    TA=basic_salary*0.05;
    gross_salary=basic_salary+HRA+TA;
    PT=gross_salary*0.02;
    net_salary=gross_salary-PT;
    printf("Net salary is :%f",net_salary);

}
