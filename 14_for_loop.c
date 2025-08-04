// 1,-2,3,-4...
#include<stdio.h>

int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==1)
        {
            printf("%d ",i);
        }
        else
        {
            i = 0 - i;
            printf("%d ",i);
            i = 0 - i;
        }
    }
    return 0;
}
