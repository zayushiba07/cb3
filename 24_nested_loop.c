/*
a
a b
a b c
a b c d

*/

#include<stdio.h>

int main()
{
    char symbol;
    int no,row,column;

    printf("Enter symbol :");
    scanf("%c",&symbol);

    no = symbol;

    no = no-97;

    for(row=0;row<=no;row++)
    {
        for(column=97;column<=97+row;column++)
        {
            printf("%c",column);
        }
        printf("\n");
    }
    return 0;

    
}