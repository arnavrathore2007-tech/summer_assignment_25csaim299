# include <stdio.h>
int main (){
    int a,b;
    printf("Enter the numbers you wan to enter: ");
    scanf("%d",&a );
    int arr[a];

    for (int i =0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int j =0; j<a-1; j++){
        for (int k =0; k<a-1-j; k++){
            if (arr[k]> arr[k+1]){
                b= arr[k];
                arr[k]= arr[k+1];
                arr[k+1]= b;
            }
        }
    }

    for(int l=0; l<a; l++){
        printf("%d", arr[l]);
    }


 return 0;
}