#include <stdio.h>

int main (){
    int a,b ;
    char ch;
    ch= 'A';
    printf(" Enter the height of the pattern ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++ ){
        for (int j = 0; j <= i; j++){
            printf ("%c", ch);
        }
        printf("\n");
        ch++;
    }

    return 0;
  
}