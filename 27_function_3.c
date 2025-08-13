#include<stdio.h>

int addition(int no1,int no2)
{
    int result;
    result = no1+no2;
    return result;
}

int subtraction(int no1,int no2)
{
    int result;
    result = no1-no2;
    return result;
}

int main()
{
    int number1,number2;
    printf("Enter number 1:");
    scanf("%d",&number1);
    printf("Enter number 2:");
    scanf("%d",&number2);

   // int addresult = addition(number1,number2);
   // int subresult = subtraction(number1,number2);

    printf("Addition function call :%d\n",addition(number1,number2));
    printf("substraction  function call :%d\n",subtraction(number1,number2));

    printf("Addition function call :%d\n",addition(80,56));
    printf("substraction  function call :%d\n",subtraction(90,52));

    printf("Addition function call :%d\n",addition(78,23));
    printf("substraction  function call :%d\n",subtraction(56,23));

    return 0;

}