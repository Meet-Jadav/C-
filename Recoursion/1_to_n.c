#include <stdio.h>
int fun(int n){
    if(n>0){
        fun(n-1);
        printf ("%d \n",n);
    }
}
int main (){
    int n ;
    printf ("Enter n:");
    scanf ("%d",&n);
    fun(n);
    return 0;
}