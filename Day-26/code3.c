#include <stdio.h>

int main()
{
    int a=5000,b,c;

    do
    {
        printf("\n1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&b);

        switch(b)
        {
            case 1:
                printf("Balance = %d\n",a);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d",&c);

                a=a+c;

                printf("Updated Balance = %d\n",a);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d",&c);

                if(c<=a)
                {
                    a=a-c;
                    printf("Updated Balance = %d\n",a);
                }
                else
                {
                    printf("Insufficient Balance\n");
                }

                break;

            case 4:
                printf("Thank You\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(b!=4);

    return 0;
}