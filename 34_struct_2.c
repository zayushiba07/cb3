#include <stdio.h>

struct student
{
    int roll_no, subject[5], total;
    float avg;
    char name[30];
};

int main()
{
    struct student s1;
    s1.total = 0;

    printf("Enter roll no : ");
    scanf("%d", &s1.roll_no);

    printf("Enter name : ");
    scanf("%s", s1.name);

    for (int i = 0; i < 5; i++) 
    {
        printf("Enter subject [%d]: ", i + 1);
        scanf("%d", &s1.subject[i]);
        s1.total += s1.subject[i];
    }

    s1.avg = s1.total / 5.0;

    printf("============================\n");
    printf("student data print here\n");
    printf("============================\n");
    printf("roll no is : %d\n", s1.roll_no);
    printf("name is : %s\n", s1.name);

    for (int i = 0; i < 5; i++) 
    {
        printf("subject mark [%d]: %d\n", i + 1, s1.subject[i]);
    }

    printf("total is : %d\n", s1.total);
    printf("avg is : %.2f\n", s1.avg);

    return 0;
}
