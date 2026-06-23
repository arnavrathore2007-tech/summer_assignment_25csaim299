#include <Stdio.h>
int main (){
    int a,sum=0;
    printf("How many numbers are you going to enter\n");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the numbers\n");
  for (int i =0 ; i<a; i++){
    scanf("%d",&arr[i]);
  }
  printf("The sum of the numbers you enetered is: ");
  for (int j=0; j<a; j++){
    sum = sum + arr[j];
  }
  printf("%d\n", sum);
  printf("The average of the numbers you entered are: ");
  printf("%d\n", sum/a);


  return 0 ;

}   