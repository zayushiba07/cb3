/*
     *
    **
   ***
  ****   
*/

#include<stdio.h>

int main()
{
    int row,column,space;
    for(int row=1;row<=5;row++)
    {
        for(space=1;space<=5-row;space++)
        {
            printf(" ");
        }
        for (column=1;column<=row;column++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}