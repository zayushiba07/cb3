#include<stdio.h>

int main()
{
    int cost_price,sale_price,diff;
    printf("Enter sales price :");
    scanf("%d",&sale_price);
    printf("Enter your cost price :");
    scanf("%d",&cost_price);
    diff = sale_price - cost_price;
    printf("difference is :%d\n",diff);
    if(diff<0)//<,>,<=,>=,==,!=
    {
        printf("%d loss of product\n",diff);
    }
    else
    {
        printf("%d profit of product\n",diff);
    }
    return 0;
}