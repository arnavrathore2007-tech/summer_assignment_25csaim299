#include <stdio.h>

int main()
{
    int a[100], b, c, d, e;

    printf("Enter how many elements: ");
    scanf("%d", &b);

    printf("Enter elements:\n");

    for(c = 0; c < b; c++)
    {
        scanf("%d", &a[c]);
    }

    for(c = 0; c < b - 1; c++)
    {
        for(d = 0; d < b - c - 1; d++)
        {
            if(a[d] > a[d + 1])
            {
                e = a[d];
                a[d] = a[d + 1];
                a[d + 1] = e;
            }
        }
    }

    printf("Sorted array:\n");

    for(c = 0; c < b; c++)
    {
        printf("%d ", a[c]);
    }

    return 0;
}