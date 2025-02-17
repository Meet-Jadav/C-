#include <stdio.h>
int main (){
    int a,b ;
    printf ("Enter your base number :");
    scanf ("%d",&a);
    printf ("Enter your power value:");
    scanf ("%d",&b);
    int y = 1;
    for (int i=1;i<=b;i++){
        y = y*a;
    }
    printf("your ans is = %d",y);
    return 0;
}