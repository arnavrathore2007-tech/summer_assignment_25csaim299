#include <stdio.h>

void perfect(int n) {
    int i, s = 0;
    
    for(i = 1; i < n; i++) {
        if(n % i == 0) {
            s = s + i;
        }
    }
    
    if(s == n) {
        printf("%d perfect number\n", n);
    } else {
        printf("%d not a perfect number\n", n);
    }
}

int main() {
    int num;
    printf("Enter a numebr: ");
    scanf("%d", &num);
    perfect(num);
    






    return 0;
}