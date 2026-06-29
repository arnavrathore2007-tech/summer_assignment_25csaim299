#include <stdio.h>

int main()
{
    char a[50];
    long long b;

    printf("Enter Name: ");
    scanf("%s", a);

    printf("Enter Mobile Number: ");
    scanf("%lld", &b);

    printf("\n----- Contact Details -----\n");
    printf("Name : %s\n", a);
    printf("Mobile Number : %lld\n", b);

    return 0;
}