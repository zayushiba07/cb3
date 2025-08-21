#include<stdio.h>

int main()
{
    int choice,i;
    printf("Enter choice of array :");
    scanf("%d",&choice);

    int sub[choice];

    for(i=1;i<=choice;i++)
    {
        printf("Enter subject [%d] :",i);
        scanf("%d",&sub[i]);
    }
    for(i=1;i<=choice;i++)
    {
        printf("subject [%d] : %d\n",i,sub[i]);
    }
    return 0;

}