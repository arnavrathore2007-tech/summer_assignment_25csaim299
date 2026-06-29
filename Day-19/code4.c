#include <stdio.h>

int main()
{
    int a[10][10];
    int b, i, j, c = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &b);

    printf("Enter matrix:\n");

    for(i = 0; i < b; i++)
    {
        for(j = 0; j < b; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < b; i++)
    {
        c = c + a[i][i];
    }

    printf("Diagonal Sum = %d", c);

    return 0;
}