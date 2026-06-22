#include <stdio.h>

void arm(int n) {
    int a, r, sum = 0;
    a = n;
    
    while(a > 0) {
        r = a % 10;
        sum = sum + (r * r * r);
        a = a / 10;
    }
    if(n == sum) {
 printf("%d is armstrong\n", n);
    } else {
   printf("%d nahi hai\n", n);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    arm(num);
    
    
    
    
    
    return 0;
}