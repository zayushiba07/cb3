/*
    12 - two one 

    12 / 10 = 1.2
    1.2 %  2

    1/10  0. 1
*/

#include<stdio.h>

int main()
{
    int no,first,last;
    printf("Enter number between 10 to 99 :");
    scanf("%d",&no);
    first = no % 10;
    last = no / 10;

    if(no>=10 && no <=99)
    {
        switch (first)
         {
            case 0:
               printf("zero ");
               break;
            case 1:
               printf("one ");
               break;
            case 2:
               printf("two ");
               break;
            case 3:
               printf("three");
               break;
            case 4:
               printf("four");
               break;
            case 5:
               printf("five");
               break;
            case 6:
               printf("six");
               break;
            case 7:
               printf("seven");
               break;
            case 8:
               printf("eight");
               break;
            case 9:
               printf("nine");
               break;
         
         }
         switch (last)
         {
            case 0:
               printf("zero ");
               break;
            case 1:
               printf("one ");
               break;
            case 2:
               printf("two ");
               break;
            case 3:
               printf("three");
               break;
            case 4:
               printf("four");
               break;
            case 5:
               printf("five");
               break;
            case 6:
               printf("six");
               break;
            case 7:
               printf("seven");
               break;
            case 8:
               printf("eight");
               break;
            case 9:
               printf("nine");
               break;
         }
 }
 else
 {
      printf("Please enter proper number and enter between 10 to 99 not any other number");
 }
    return 0;
}