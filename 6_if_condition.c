#include<stdio.h>

int main()
{
    int number,cube;
    printf("Enter number for cube:");
    scanf("%d",&number);
    if(number<0)//<,>,<=,>=,!=,==
    {
        printf("nagative number is :%d\n",number);
        number = 0 - number;
        printf("nagative number is covert into postive number :%d\n",number);
    }
    cube = number*number*number;
    printf("cube is :%d\n",cube);
    printf("code run succefully....");
    return 0;
}