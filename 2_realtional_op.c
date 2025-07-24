#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the number 1 :");
    scanf("%d",&num1);
     printf("Enter the number 2 :");
    scanf("%d",&num2);
    printf("Equal to :%d\n",num1==num2);
    printf("Not Equal to :%d\n",num1!=num2);
    printf("Greater then :%d\n",num1>num2);
    printf("less then :%d\n",num1<num2);
    printf("greater then or equl :%d\n",num1>=num2);
    printf("less then or equl :%d\n",num1<=num2);
    return 0;
}