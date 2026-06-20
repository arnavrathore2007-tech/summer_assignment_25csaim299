#include <stdio.h>
int main (){
    int a;
    printf("Enter the height of pyramid ");
    scanf("%d",&a);
    for (int i = 1; i<=a; i++){
       for (int l = 1; l <= a - i; l++){
            printf(" ");
        }
        for(int j=1; j<= i; j++){
            printf("%d", j);
        }
        for (int k = i - 1; k >= 1; k--){
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;

}