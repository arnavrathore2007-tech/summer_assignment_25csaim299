#include <stdio.h>

int main()
{
    int a[10][10];
    int b, c, i, j;

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

    printf("Transpose Matrix:\n");

    for(i = 0; i < c; i++)
    {
        for(j = 0; j < b; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}