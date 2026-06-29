#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int d, e, f = 0, i, j, k;

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
        c[f] = a[i];
        f++;
    }

    for(i = 0; i < e; i++)
    {
        k = 0;

        for(j = 0; j < d; j++)
        {
            if(b[i] == a[j])
            {
                k = 1;
                break;
            }
        }

        if(k == 0)
        {
            c[f] = b[i];
            f++;
        }
    }

    printf("Union of arrays:\n");

    for(i = 0; i < f; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}