#include <stdio.h>

int main() {
    int n, i;
    int fact = 1; 

    printf("Enter the number to find factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Bhai, negative number ka factorial nahi hota.\n");
    } 
    else {
        for (i = 1; i <= n; ++i) {
      fact = fact * i; 
        }
        
        printf("factorial is : %d\n", n, fact);
    }

    return 0;
}