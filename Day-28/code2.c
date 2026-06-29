#include <stdio.h>

int main()
{
    char a[50];
    int b;
    float c, d;

    printf("Enter Account Holder Name: ");
    scanf("%s", a);

    printf("Enter Account Number: ");
    scanf("%d", &b);

    printf("Enter Balance: ");
    scanf("%f", &c);

    printf("Enter Deposit Amount: ");
    scanf("%f", &d);

    c = c + d;

    printf("\n----- Account Details -----\n");
    printf("Name : %s\n", a);
    printf("Account Number : %d\n", b);
    printf("Current Balance : %.2f\n", c);

    return 0;
}