#include<stdio.h>

void odd_even(int no)
{
    if(no%2==0)
    {
        printf("Number is even number\n");
    }
    else
    {
        printf("Number is odd number\n");
    }
}

int main()
{
    int number;
    printf("Enter number :");
    scanf("%d",&number);
    odd_even(number);
    odd_even(50);
    odd_even(89);
    odd_even(456);
    odd_even(189);
    return 0;
}