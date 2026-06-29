#include <stdio.h>

int main()
{
    char a[50];
    int b, c;
    float d;

    printf("Enter Passenger Name: ");
    scanf("%s", a);

    printf("Enter Number of Tickets: ");
    scanf("%d", &b);

    printf("Enter Price per Ticket: ");
    scanf("%f", &d);

    c = b * d;

    printf("\n----- Ticket Details -----\n");
    printf("Passenger Name : %s\n", a);
    printf("Tickets : %d\n", b);
    printf("Total Amount : %d\n", c);

    return 0;
}