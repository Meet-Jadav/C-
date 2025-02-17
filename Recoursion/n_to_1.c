#include <stdio.h>
void fun (int n){
    // if (n==0) return;
    // printf ("%d \n",n);
    // fun (n-1);
    if (n>0){
        printf ("%d \n",n);
        fun (n-1);
    }
    return;
}
int main (){
    int n ;
    printf ("Enter n:");
    scanf ("%d",&n);
    fun(n);
    return 0;
}