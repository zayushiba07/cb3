#include<stdio.h>

int main()
{
    int number,rem;
    printf("Enter number for even/odd :");
    scanf("%d",&number);
    rem = number % 2;
    printf("reminder is :%d\n",rem);
    if(rem==1||rem==-1)
    {
        printf("number is even number : %d\n",number);
    }
    if(rem==0)
    {
        printf("number is odd number :%d\n",number);
    }
    return 0;
}