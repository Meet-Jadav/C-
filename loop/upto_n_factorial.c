#include <stdio.h>
int main (){
    int x;
    printf ("Enter your no :");
    scanf ("%d",&x);
    int y = 1;
        for (int i=1;i<=x;i++){
            y *= i;
            printf ("%d! = %d\n",i,y);
    }
 return 0;
}