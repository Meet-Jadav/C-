//Write a program to convert decimal numbers into binary using recursion.
#include <stdio.h>
int b;
int binary (int n){
    if(n==0) {
       // b = b*10 + (n%2);   not effecting .
        return 1;
        }
    else {
        n = n/2;
        binary(n);
        b = b*10 +(n%2);
    }
}
int main (){
    int n ;
    printf ("Enter your no :");
    scanf ("%d",&n);
    printf ("The binary of %d is : %d",n,binary(n)*10+(n%2));
    return 0;
}
