#include <stdio.h>
int binary (int n){
    if (n==0) return 1;
    int x = binary(n/2);
    int r = n%2;
    printf("%d",r);
}
int main (){
    int n,x;
    printf ("Enter your no :");
    scanf ("%d",&n);
    printf ("\n %d in binary is %d",n,x);
    binary(n);
    return 0;
}