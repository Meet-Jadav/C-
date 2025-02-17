#include <stdio.h>
int main (){
    int x;
    printf ("Enter your no:");
    scanf ("%d",&x);
    int sum = 0;
    int a = 0;
    while (x!=0){
        int y = x%10;
        x = x/10;
        a = a+1;
        if (a%2==0){
            sum = sum + y;
        }
    }
    printf ("Sum of degits at even place is = %d",sum);
    return 0;
}