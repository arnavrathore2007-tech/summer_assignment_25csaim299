#include <stdio.h>

int main()
{
    int a[100], b, c, d, e, f;

    printf("Enter how many elements: ");
    scanf("%d", &b);

    printf("Enter elements:\n");

    for(c = 0; c < b; c++)
    {
        scanf("%d", &a[c]);
    }

    for(c = 0; c < b - 1; c++)
    {
        f = c;

        for(d = c + 1; d < b; d++)
        {
            if(a[d] < a[f])
            {
                f = d;
            }
        }

        e = a[c];
        a[c] = a[f];
        a[f] = e;
    }

    printf("Sorted array:\n");

    for(c = 0; c < b; c++)
    {
        printf("%d ", a[c]);
    }

    return 0;
}