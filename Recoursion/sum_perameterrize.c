// to do sum of no from 1 to n .
#include <stdio.h>
void sump (int n,int s){
    if(n>0){
        sump(n-1,s+n);
    }
    else {
        printf ("sum = %d",s);
        return ;
    }
}
int main (){
     int n ;
    printf ("Enter your no:");
    scanf ("%d",&n);
    sump(n,0);
    return 0;
}
