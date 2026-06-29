#include <stdio.h>

int main()
{
    int a, b, c;

    do
    {
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &c);

        if(c >= 1 && c <= 4)
        {
            printf("Enter First Number: ");
            scanf("%d", &a);

            printf("Enter Second Number: ");
            scanf("%d", &b);
        }

        switch(c)
        {
            case 1:
                printf("Answer = %d\n", a + b);
                break;

            case 2:
                printf("Answer = %d\n", a - b);
                break;

            case 3:
                printf("Answer = %d\n", a * b);
                break;

            case 4:
                printf("Answer = %.2f\n", (float)a / b);
                break;

            case 5:
                printf("Thank You");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(c != 5);

    return 0;
}