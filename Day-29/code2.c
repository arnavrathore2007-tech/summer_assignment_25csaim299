#include <stdio.h>

int main()
{
    int a[100], b, c, d, i;

    printf("Enter Number of Elements: ");
    scanf("%d", &b);

    printf("Enter Elements:\n");

    for(i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n1. Display Array\n");
        printf("2. Find Maximum\n");
        printf("3. Find Minimum\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &c);

        switch(c)
        {
            case 1:
                for(i = 0; i < b; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 2:
                d = a[0];

                for(i = 1; i < b; i++)
                {
                    if(a[i] > d)
                        d = a[i];
                }

                printf("Maximum = %d\n", d);
                break;

            case 3:
                d = a[0];

                for(i = 1; i < b; i++)
                {
                    if(a[i] < d)
                        d = a[i];
                }

                printf("Minimum = %d\n", d);
                break;

            case 4:
                printf("Thank You");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(c != 4);

    return 0;
}