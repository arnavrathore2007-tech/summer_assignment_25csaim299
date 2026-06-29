#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int d, e, i, j = 0;

    printf("Enter size of first array: ");
    scanf("%d", &d);

    printf("Enter elements:\n");

    for(i = 0; i < d; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &e);

    printf("Enter elements:\n");

    for(i = 0; i < e; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < d; i++)
    {
        c[j] = a[i];
        j++;
    }

    for(i = 0; i < e; i++)
    {
        c[j] = b[i];
        j++;
    }

    printf("Merged array:\n");

    for(i = 0; i < j; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}