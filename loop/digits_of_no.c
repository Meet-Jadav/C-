#include <stdio.h>
int main (){
    int x;
    printf ("Enter your number :");
    scanf ("%d",&x);
    int count = 0 ;
    while(x!=0){
        x =x/10;
        count++;
    }
    printf ("Numbers of digits are: %d",count);
    return 0;
}