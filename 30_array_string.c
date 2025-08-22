#include<stdio.h>

int main()
{
    char name[30];
    int i,n;

    printf("Enter your name :");
    for(i=0;i<=30;i++)
    {
        scanf("%c",&name[i]);
        if(name[i]=='\n')
        {
            break;
        }
    }
     for(i=0;i<=30;i++)
    {
        printf("%c",name[i]);
        if(name[i]=='\n')
        {
            n=i;
            break;
        }
    }
    for(i=n;i>=0;i--)
    {
        printf("%c",name[i]);
        
    }
    printf("length of string :%d\n",n);
    return 0;

}