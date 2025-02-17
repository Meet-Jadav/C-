#include <stdio.h>
int main (){
   int n ;
   printf ("Enter your number:");
   scanf ("%d",&n);
   int x=1,y=1;
   printf ("Series : 0 1 1 ");
   for (int i = 1;i<=n-3;i++){
    int z = x + y;
    y = x;
    x = z;
    printf("%d ",z);
   }
    return 0;
    }
   
