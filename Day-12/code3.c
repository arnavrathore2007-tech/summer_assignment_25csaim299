#include <stdio.h>

void fib(int n) {
    int x = 0, y = 1, z, i;
    printf("%d %d ", x, y);
    
    for(i = 2; i < n; i++) {
        z = x + y;
         printf("%d ", z);
         x = y;
         y = z;
    }
    printf("\n");
}

int main() {
    int term;
    printf("How many terms to print: ");
    scanf("%d", &term);
    
    if(term == 1) {
        printf("0\n");
    } else if(term > 1) {
        fib(term);
    }
    
    return 0;
}