// program to find nPr ;
#include <stdio.h>
int factorial (int x){
    int y=1;
    for (int i=1;i<=x;i++)
{
        y=(y*i);
        }  // give 1*2*3...*x=x!
        return y;
}

int permutation (int n,int r){
   int  npr = factorial(n)/factorial(n-r);
    return npr;
}

int main (){
    int n,r;
    printf ("Enter n:");
    scanf ("%d",&n);
    printf ("Enter r:");
    scanf ("%d",&r);
    int npr = permutation(n,r);
    printf ("%d",npr);
    return 0;
}
