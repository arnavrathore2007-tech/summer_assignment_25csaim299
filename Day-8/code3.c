#include <stdio.h>
int main (){
  int a;
  char ch;
  ch= 'A';
  printf ("Enter the height of the alphabetic pyramid ");
  scanf("%d", &a);
  for (int i =0 ; i<a ; i ++){
    for (int j=1 ; j<=i; j++){
       printf("%c",ch);
       ch++ ;
    }
    printf("\n");
  }
  return 0;
}