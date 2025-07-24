#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the number1 :");
    scanf("%d",&num1);
    printf("Enter the number2 :");
    scanf("%d",&num2);
    printf("+= :%d\n",num1+=num2);//num1 = num1 + num2
    printf("-= :%d\n",num1-=num2);//num1 = num1 - num2
    printf("/= :%d\n",num1/=num2);
    printf("%%= :%d\n",num1%=num2);
    printf("*= :%d\n",num1*=num2);
    return 0;
}