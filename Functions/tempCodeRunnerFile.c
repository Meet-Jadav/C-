#include <stdio.h>
int factorial (int a){
    int fact = 1;
    for (int i=1;i<=a;i++) {
        fact *= i;
    }
    return fact;
}
int main (){
    int n;
    printf ("Enter the no :");
    scanf ("%d",&n);
    printf ("%d! = %d",n,factorial(n));
    return 0;
}
