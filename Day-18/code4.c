#include <stdio.h>

int main()
{
    int a[100], b, c, d, e, f, g;

    printf("Enter how many elements (Sorted Array): ");
    scanf("%d", &b);

    printf("Enter elements:\n");

    for(c = 0; c < b; c++)
    {
        scanf("%d", &a[c]);
    }

    printf("Enter element to search: ");
    scanf("%d", &g);

    d = 0;
    e = b - 1;
    f = -1;

    while(d <= e)
    {
        c = (d + e) / 2;

        if(a[c] == g)
        {
            f = c;
            break;
        }
        else if(a[c] < g)
        {
            d = c + 1;
        }
        else
        {
            e = c - 1;
        }
    }

    if(f != -1)
        printf("Element found at position %d", f + 1);
    else
        printf("Element not found");

    return 0;
}