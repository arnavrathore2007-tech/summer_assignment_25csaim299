#include <stdio.h>

int main (){
    int a;
    printf("Enter the height of pyramid: ");
    scanf("%d", &a);
    
    for (int i = 1; i <= a; i++){
        
    for (int j = 1; j <= a - i; j++){
            printf(" ");
        }
            for(int j = 1; j <= i; j++){
            printf("%c", 'A' + j - 1); 
        }
for (int k = i - 1; k >= 1; k--){
            printf("%c", 'A' + k - 1);
        }
        
        printf("\n");
    }

    return 0;
}