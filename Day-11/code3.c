#include <stdio.h>

// Prime check karne ka function
void checkPrime(int n) {
    int i, flag = 0;

    // 0 aur 1 prime nahi hote
    if (n == 0 || n == 1) {
        printf("%d prime number nahi hai.\n", n);
        return;
    }


    for (i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
       flag = 1;
    break; 
    
     
      }
    }

    if (flag == 0)
printf("%d is prime.\n", n);
    else
     printf("%d Not prime.\n", n);
}

int main() {
    int num;
    
    printf("Enter a number: ");
        scanf("%d", &num);
        checkPrime(num);
    
    return 0;
}