#include<stdio.h>

int main()
{
    int row = 3, column = 3, i, j;
    int num[row][column];

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("Enter number[%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%4d", num[i][j]);  
        }
        printf("\n");
    }

    return 0;
}
