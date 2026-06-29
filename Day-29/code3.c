#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int b;

    printf("Enter String: ");
    scanf("%s", a);

    do
    {
        printf("\n1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &b);

        switch(b)
        {
            case 1:
                printf("Length = %d\n", strlen(a));
                break;

            case 2:
                strrev(a);
                printf("Reverse = %s\n", a);
                break;

            case 3:
            {
                int i;

                for(i = 0; a[i] != '\0'; i++)
                {
                    if(a[i] >= 'a' && a[i] <= 'z')
                        a[i] = a[i] - 32;
                }

                printf("Uppercase = %s\n", a);
                break;
            }

            case 4:
                printf("Thank You");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(b != 4);

    return 0;
}