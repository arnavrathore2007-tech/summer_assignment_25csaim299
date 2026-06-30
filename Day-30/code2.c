#include <stdio.h>

int main()
{
    char a[20][50];
    int b, i;

    printf("Enter Number of Books: ");
    scanf("%d", &b);

    for(i = 0; i < b; i++)
    {
        printf("Enter Book Name: ");
        scanf("%s", a[i]);
    }

    printf("\n----- Book List -----\n");

    for(i = 0; i < b; i++)
    {
        printf("%d. %s\n", i + 1, a[i]);
    }

    return 0;
}