#include <stdio.h>

int main() {
    int n, rem, dec = 0, p = 1;

    printf("Enter binary number: ");
    scanf("%d", &n);

    while(n > 0) {
        rem = n % 10;
      dec = dec + rem * p;
      p = p * 2;
        n = n / 10;
    }

    printf("Decimal = %d", dec);

    return 0;
}