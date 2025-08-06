#include<stdio.h>

int main()
{
    int start=1,number,cube;
    printf("Enter number of cube :");
    scanf("%2d",&number);
    while (start<=number)
    {
        cube = start*start*start;
        printf("%5d",cube);
        start++;
    }
    return 0;
}