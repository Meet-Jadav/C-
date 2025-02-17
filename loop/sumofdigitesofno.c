#include <stdio.h>
int main (){
     int x;
    printf ("Enter your number :");
    scanf ("%d",&x);
    int sum = 0;
    while (x!=0){
        sum = sum + (x%10);
        x = x/10;
    }
    printf ("The sum of digits of this no is : %d",sum);
    return 0;
}