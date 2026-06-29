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

    printf("Enter target sum: ");
    scanf("%d", &e);

    printf("Pairs are:\n");

    for(c = 0; c < b; c++)
    {
        for(d = c + 1; d < b; d++)
        {
            if(a[c] + a[d] == e)
            {
                printf("%d %d\n", a[c], a[d]);
            }
        }
    }

    return 0;
}