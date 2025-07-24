#include<stdio.h>

int main()
{
    int num1,num2,num3,num4;
    printf("Enter the number 1 :");//20
    scanf("%d",&num1);
    printf("Enter the number 2 :");//30
    scanf("%d",&num2);
    printf("Enter the number 3 :");//40
    scanf("%d",&num3);
    printf("Enter the number 4 :");//50
    scanf("%d",&num4);

    printf("AND :%d\n",num1==num2&&num3==num4);//1,0,0
    printf("OR :%d\n",num1==num2||num3==num4);//1,1,0
    printf("OR :%d\n",!(num1==num2||num3==num4));//0,0,1
    return 0;
}