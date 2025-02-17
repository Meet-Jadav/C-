#include <stdio.h>
int factorial (int x){
    int y=1;
    for (int i=1;i<=x;i++){
        y=(y*i);
        }  // give 1*2*3...*x=x!
        return y;
}

int combination (int n,int r){
   int  ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

int main (){
    int n,r;
    printf ("Enter n:");
    scanf ("%d",&n);
    printf ("Enter r:");
    scanf ("%d",&r);
    int ncr = combination(n,r);
    printf ("%d",ncr);
    return 0;
}
