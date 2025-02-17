#include <stdio.h>
int main (){
    int n; 
    printf ("Enter your no.");
    scanf ("%d",&n);
    int factorial = 1;
    for (int i = 1;i<=n;i++){
        factorial = factorial * i;
    }
    printf ("%d! = %d",n,factorial);
    return 0;
}