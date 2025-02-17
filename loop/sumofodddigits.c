#include <stdio.h>
int main (){
     int x;
    printf ("Enter your number :");
    scanf ("%d",&x);
    int sum = 0;
    while (x!=0){
        int ld = x%10;
        if (ld%2==0){
        sum = sum +ld;
        x = x/10;
        }
        else continue;
    }
    printf ("The sum of even digits of this no is : %d",sum);
    return 0;
}