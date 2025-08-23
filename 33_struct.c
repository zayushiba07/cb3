#include<stdio.h>

struct student
{
    int roll_no,age,weight;
    char name[30];
};

int main()
{
    struct student s1;
    printf("Enter roll no :");
    scanf("%d",&s1.roll_no);
    printf("Enter name :");
    scanf("%s",&s1.name);
    printf("Enter  age :");
    scanf("%d",&s1.age);
    printf("Enter weight:");
    scanf("%d",&s1.weight);
    printf("============================\n");
    printf("roll no is :%d\n",s1.roll_no);
    printf("name is :%s\n",s1.name);
    printf("age is :%d\n",s1.age);
    printf("weight is :%d\n",s1.weight);
    return 0;
}


