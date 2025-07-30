#include<stdio.h>

int main()
{
    int days;
    printf("Enter days :");
    scanf("%d",&days);
    if(days==1)
    {
        printf("%d is sunday",days);
    }
    else if (days==2)
    {
        printf("%d is monday",days);
    }
    else if (days==3)
    {
        printf("%d is tuesday",days);
    }
    else if (days==4)
    {
        printf("%d is wedsday",days);
    }
    else if (days==5)
    {
        printf("%d is thursday",days);
    }
    else if (days==6)
    {
        printf("%d is friday",days);
    }
    else if (days==7)
    {
        printf("%d is saturday",days);
    }
    else
    {
        printf("invalid number you enter plese enter proper number");
    }
    return 0; 
}