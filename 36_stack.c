#include<stdio.h>

int top=-1,stack[5];

void push(int no)//10
{
    if(top==5-1)
    {
        printf("stack is overflow\n");
    }
    else
    {
        top++;//0
        stack[top]=no;//10
        printf("stack is added succefully  :%d\n",no);//10
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack is remove successfully : %d",stack[top]);
        top--;
    }
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%3d",stack[i]);
    }
}

int main()
{
    int no,choice;
    while (1)
    {
       printf("\n1.push\n2.pop\n3.display\n4.exit\n");
       printf("Enter your choice for stack operation :");
       scanf("%d",&choice);
       switch (choice)
       {
            case 1:
                printf("Enter no for push operation :");
                scanf("%d",&no);//10
                push(no);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
       }
       if(choice==4)
       {
            break;;
       }
    }
    return 0;
    
}