// program to print both incrising & decring series.
#include <stdio.h>
void fun (int n){
    if(n>0){
    printf ("%d \n",n);
    fun (n-1);
    printf ("%d \n",n);
    }
}
int main (){
    int n ;
    printf ("Enter your no:");
    scanf ("%d",&n);
    fun(n);
    return 0;
}