#include<stdio.h>

int main()
{
    char stud_name[5][30],i;

    printf("Student name enter there\n");
    printf("-----------------------------\n");
    for(i=1;i<=5;i++)
    {
        printf("Enter student name [%d]:",i);
        scanf("%s",&stud_name[i]);
    }
    printf("Student name print there\n");
    printf("-----------------------------\n");
    for(i=1;i<=5;i++)
    {
        printf("%s\n",stud_name[i]);
    }
    return 0;
}