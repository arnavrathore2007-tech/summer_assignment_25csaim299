#include <stdio.h>

int main()
{
    int a[10][10];
    int b, c, i, j, d;

    printf("Enter number of rows: ");
    scanf("%d", &b);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix:\n");

    for(i = 0; i < b; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Column-wise Sum:\n");

    for(j = 0; j < c; j++)
    {
        d = 0;

        for(i = 0; i < b; i++)
        {
            d = d + a[i][j];
        }

        printf("Column %d = %d\n", j + 1, d);
    }

    return 0;
}