#include <Stdio.h>
int factorial(int a){
    int b;
    if (a<1){
        return 1;
    }
    b = a * factorial(a-1);
    return b;
}
int main(){
    int a,b;
    printf (" Enter the number, of which you want the factorial of: ");
    scanf("%d", &a);

    b =  factorial(a);
    printf("%d", b);

}