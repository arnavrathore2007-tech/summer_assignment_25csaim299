#include <Stdio.h>
int main (){
    int a;
    printf("How many numbers are you going to enter\n");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the numbers\n");
  for (int i =0 ; i<a; i++){
    scanf("%d",&arr[i]);
  }
  printf("The numbers are: ");
for (int j =0 ; j<a; j++){
    printf("%d \n", arr[j]);
  }

  return 0 ;

}   