/*
12345
1234
123
12
1

*****
****
***
**
*

*
**
***
****
*****

*/

#include<stdio.h>

int main()
{
    int row,column;
    for(row=5;row>=1;row--)
    {
        for(column=1;column<=row;column++)
        {
            printf("%d",column);
        }
        printf("\n");
    }
}