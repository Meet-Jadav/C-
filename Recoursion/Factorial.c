// program to find factorial of a no. by recursion.
#include <stdio.h>

// universal coed ;
// int factorial (int n){
//     int f = 1;
//     if (n>0){
//      f = n * factorial(n-1);
//     }
//     return f;
// }


// we have to specify for 0& 1;
// .
// .
int factorial (int n ){
    int f;
    if (n==1||n==0) return 1;
    f = n * factorial (n-1);
}



// int factorial (int n){
//     if (n>0){
//         return n * factorial (n-1);
//     }
//     else return 1;
// }


int main (){
    int n;
    printf ("Enter your no:");
    scanf ("%d",&n);
    int a = factorial(n);
    printf ("%d! = %d",n,a);
    return 0;
}