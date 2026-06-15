#include <stdio.h>

int main() {
    int x, n,
     ans = 1;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n ");

    scanf("%d", &n);




    for(int i = 1; i <= n; i++) {
        ans = ans * x;
    }

    printf("Answer: %d", ans);

    return 0;
}