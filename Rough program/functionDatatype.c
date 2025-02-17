// program to do experiment on data type in function 
#include <stdio.h>
int power (int a, int b){
    if (b==0) return 1;
    return a * power(a,b-1);
}
int main (){
    float n;
    printf ("Enter n:");
    scanf ("%f",&n);
    float b;
    printf ("Enter b:");
    scanf ("%f",&b);
    printf ("Ans = %d",power(n,b));
    return 0;
}