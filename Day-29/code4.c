#include <stdio.h>

int main()
{
    char a[50];
    int b, c;
    float d;

    printf("Enter Product Name: ");
    scanf("%s", a);

    printf("Enter Product ID: ");
    scanf("%d", &b);

    printf("Enter Quantity: ");
    scanf("%d", &c);

    printf("Enter Price: ");
    scanf("%f", &d);

    printf("\n----- Inventory Details -----\n");
    printf("Product Name : %s\n", a);
    printf("Product ID : %d\n", b);
    printf("Quantity : %d\n", c);
    printf("Price : %.2f\n", d);

    return 0;
}