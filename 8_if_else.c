
#include<stdio.h>

int main()
{
    int time;
    printf("Enter number of 24 hours formate :");
    scanf("%d",&time);
    if(time>12)
    {
        time = time-12;
        printf("%d pm \n",time);
    }
    else
    {
        printf("%d am \n",time);
    }
    printf("code execute sucessfully...");
    return 0;
}