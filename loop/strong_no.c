#include <stdio.h>
int factorial (int x){
    int y=1;
    for (int i=1;i<=x;i++){
        y=(y*i);
        }  // give 1*2*3...*x=x!
        return y;
}
int main (){
    int x,y,sum = 0;
    printf ("Enter your no :");
    scanf ("%d",&x);
    while (x!=0){
        y=x%10;
        x=x/10;
        sum = sum + factorial(y) ;
    }
    if (sum == x){
        printf ("Your number is Strong no.");
    }
    else printf ("your no is not an Strong no.");
    return 0;
}