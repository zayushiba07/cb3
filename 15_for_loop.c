#include<stdio.h>

int main()
{
    int i,number,result;
    printf("Enter number for print table :");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
        result = number * i;
        printf("%d X %d = %d\n",number,i,result);
    }
    return 0;
}