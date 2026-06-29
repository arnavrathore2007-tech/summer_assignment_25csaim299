#include <stdio.h>

int main()
{
    char a[50];
    int b, c;

    printf("Enter Book Name: ");
    scanf("%s", a);

    printf("Enter Book ID: ");
    scanf("%d", &b);

    printf("Enter Number of Copies: ");
    scanf("%d", &c);

    printf("\n----- Library Record -----\n");
    printf("Book Name : %s\n", a);
    printf("Book ID : %d\n", b);
    printf("Copies Available : %d\n", c);

    return 0;
}