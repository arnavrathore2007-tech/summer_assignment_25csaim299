#include <stdio.h>

int main()
{
    int a[100], b[100];
    int c, d, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &c);

    printf("Enter elements:\n");

    for(i = 0; i < c; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &d);

    printf("Enter elements:\n");

    for(i = 0; i < d; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("Intersection elements:\n");

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < d; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}