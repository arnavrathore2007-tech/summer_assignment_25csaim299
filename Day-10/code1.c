#include <stdio.h>
int main(){
    int a;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &a);
    
    for (int i =1 ; i<= a; i++){
        for(int k = 1 ; k <= a-i; k++){
        printf(" ");
    } 
         
        for(int j =1; j <= 2*i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}