// program to find n th term of the fibonaci series.
#include <stdio.h>
int fibo(int n){
   if (n==1 || n==2)    return 1;
   return fibo(n-2) + fibo(n-1);
}
int main (){    
    int n; 
    printf ("Enter rank of term:");
    scanf ("%d",&n);
    printf("the %dth term is: %d ",n,fibo(n));
    return 0;
}