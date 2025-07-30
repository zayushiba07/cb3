/*
    tax :
    12,00,000 <-------- = 0%
    12,00,000 to 14,00,000 = 10%
    14,00,000 to 16,00,000 = 15%
    16,00,000 to 18,00,000 = 20%
    20,00,000 to 22,00,000 = 25%
    22,00,000>------ = 30%
*/

#include<stdio.h>

int main()
{
    int monthly_income;
    float gross_salary,tax;
    printf("Enter your monthly income :");
    scanf("%d",&monthly_income);
    gross_salary = monthly_income * 12;
    printf("gorss salary is :%f\n",gross_salary);
    if(gross_salary<1200000)//<,>,<=,>=,==,!=
    {
        tax=0;
        printf("Tax is :%d",tax);
    }
    else if (gross_salary<=1400000)//<,>,<=,>=,==,!=
    {
        tax = gross_salary * 0.10;
        printf("Tax is :%f",tax);
    }
    else if (gross_salary<=1600000)
    {
        tax = gross_salary * 0.15;
        printf("Tax is :%f",tax);
    }
    else if (gross_salary<=1800000)
    {
        tax = gross_salary * 0.20;
        printf("Tax is :%f",tax);
    }
    else if (gross_salary<=2200000)
    {
        tax = gross_salary * 0.25;
        printf("Tax is :%f",tax);
    }
    else
    {
        tax = gross_salary * 0.30;
        printf("Tax is :%f",tax);
    }
    return 0;
}