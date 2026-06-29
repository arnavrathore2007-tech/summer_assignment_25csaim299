#include <stdio.h>

int main()
{
    int a[100], b, c = 0, d = 0, i;

    printf("Enter value of n: ");
    scanf("%d", &b);

    printf("Enter %d elements:\n", b - 1);

    for(i = 0; i < b - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 1; i <= b; i++)
    {
        c = c + i;
    }

    for(i = 0; i < b - 1; i++)
    {
        d = d + a[i];
    }

    printf("Missing number = %d", c - d);

    return 0;
}