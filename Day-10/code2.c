#include <stdio.h>
int main(){
    int a;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &a);
    
    for (int i =0 ; i< a; i++){ 
         for(int j =0; j < a-(a-i); j++){
            printf(" ");
        }

        for(int k = 1 ; k <= a-i; k++){
        printf(" *");
    } 
         
       
        printf("\n");
    }
    return 0;
}