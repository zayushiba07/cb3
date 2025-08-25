#include<stdio.h>

union account
{
    int acc_no,balance;
    char acc_holder[50],bank_name[50];
};

int main()
{
    union account a1;
    printf("Enter account number :");
    scanf("%d",&a1.acc_no);
    printf("Account number is :%d\n",a1.acc_no);
    printf("Enter account holder :");
    scanf("%s",&a1.acc_holder);
    printf("Account holder is :%s\n",a1.acc_holder);
    printf("Enter bank name :");
    scanf("%s",&a1.bank_name);
    printf("Bank name  is :%s\n",a1.bank_name);
    printf("Enter account balance :");
    scanf("%d",&a1.balance);
    printf("Account balance is :%d\n",a1.balance);
    return 0;
}