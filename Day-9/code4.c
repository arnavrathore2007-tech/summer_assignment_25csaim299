#include <stdio.h>

int main (){
    int a,b ;
    printf(" Enter the length of one side of the sqaure ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++){
        if (i ==1){
            for (int j= 1; j <= a; j++){
                printf("* ");
            }
        }
        if (i == a){
             for (int j= 1; j <= a; j++){
                printf("* ");
            }
        }
        if (i>1 && i<a){
            printf("*");
            for (int k = 1; k<= a; k++){
                printf(" ");
            }
            printf("*");
        }
     printf("\n");
    }

    return 0;
  
}