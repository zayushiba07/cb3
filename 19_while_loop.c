/*
5!=5x4x3x2x1=120

6!=6x5x4x3x2x1

*/

#include<stdio.h>

int main()
{
    int fact=1,number;
    printf("Enter number for factorial :");
    scanf("%d",&number);
    while (number>0)
    {
        fact*=number;//fact = fact * number;
        number--;
    }
    printf("%5d",fact);
    return 0;   
}