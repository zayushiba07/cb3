#include<stdio.h>

void table(int start,int end)
{
    if(start<end)
    {
        printf("..........Acending order..............\n");
        while (start<=end)
        {
            for (int i = 1; i <=10; i++)
            {
                int result = start * i;
                printf("%d X %d = %d\n",start,i,result);
            }
            start++;
            printf("***********************************\n");
        }
                
    }
    else
    {
        printf("..........Decending order..............\n");
        while (start>=end)
        {
            for (int i = 1; i <=10; i++)
            {
                int result = start * i;
                printf("%d X %d = %d\n",start,i,result);
            }
            start--;
            printf("***********************************\n");    
        }
    }
}

int main()
{
    int start,end;
    printf("Enter starting number for table:");
    scanf("%d",&start);
    printf("Enter ending number for table:");
    scanf("%d",&end);

    table(start,end);
    table(4,9);
    table(5,1);
    table(6,8);
    table(7,3);
    return 0;
}
