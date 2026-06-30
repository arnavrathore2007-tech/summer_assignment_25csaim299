#include <stdio.h>

int main()
{
    char a[10][50];
    int b[10];
    int c, i;

    printf("Enter Number of Students: ");
    scanf("%d", &c);

    for(i = 0; i < c; i++)
    {
        printf("\nEnter Name: ");
        scanf("%s", a[i]);

        printf("Enter Marks: ");
        scanf("%d", &b[i]);
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < c; i++)
    {
        printf("Name : %s\n", a[i]);
        printf("Marks : %d\n\n", b[i]);
    }

    return 0;
}