#include<stdio.h>

int front=-1,rear=-1,no,queue[5];

void enquque(int no)
{
    if(rear == 5-1)
    {
        printf("queue over flow");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear]=no;
        printf("data is added successfully : %d",no);
    }
}
void dequeue()
{
    if(rear == -1 || front>rear)
    {
        printf("queue is empty");
    }
    else
    {
        printf("queue deleted succesfully : %d",queue[front]);
        front++;
    }
}
void display()
{
     for(int i=front;i<=rear;i++)
    {
        printf("%3d",queue[i]);
    }
}
int main()
{
    int no,choice;
    while (1)
    {
       printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
       printf("Enter your choice for stack operation :");
       scanf("%d",&choice);
       switch (choice)
       {
            case 1:
                printf("Enter no for push operation :");
                scanf("%d",&no);//10
                enquque(no);
                break;
            case 2:
                dequeue();
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