#include <stdio.h>
int main (){
    int x,y,sum = 0;
    printf ("Enter your no :");
    scanf ("%d",&x);
    while (x!=0){
        y=x%10;
        x=x/10;
        sum = sum + (y*y*y);
    }
    if (sum == x){
        printf ("Your number is Armstrong no.");
    }
    else printf ("your no is not an armstrong no.");
    return 0;
}