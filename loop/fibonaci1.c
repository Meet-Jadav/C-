#include <stdio.h>
int main (){
   int n ;
   printf ("Enter your number:");
   scanf ("%d",&n);
   int x=1,y=0;
   printf ("Series : 0 ");
   for (int i = 1;i<=n;i++){
    int z = x + y;
    y = x;
    x = z;
    printf("%d ",z);
   }
    return 0;
    }
   
