// to print a rais to b by recursion .
#include <stdio.h>
int power (int a, int b){
    if (b==0) return 1;
    return a * power(a,b-1);
}
int main (){
    int a;
    printf ("Enter base:");
    scanf ("%d",&a);
    int b;
    printf ("Enter power:");
    scanf ("%d",&b);
   printf ("%d raised to the power %d is: %d",a,b,power (a,b)) ;
    return 0;
}