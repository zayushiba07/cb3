
#include<stdio.h>

int main()
{
    int e_id,salary;
    char e_name;
    printf("Enter employee id :");
    scanf("%d",&e_id);
    printf("Enter employee name :");
    scanf(" %c",&e_name);
    printf("Enter employee Salary :");
    scanf("%d",&salary);
    printf("employee id : %d\n",e_id);
    printf("employee name : %c\n",e_name);
    printf("employee salary : %d",salary);
    return 0;
    
}