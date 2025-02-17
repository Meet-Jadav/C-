#include <stdio.h>
int revers (int z){
    int y = 0;
    while (z!=0){
        y = y*10;
        y = y +(z%10);
        z = z/10;
    }
    return y;
}
int main (){
    int n ;
    printf ("Enter your no:");
    scanf ("%d",&n);
    int y=0,z=0;
    while (n!=0){
         z = z*10 + y;
         y = n%2;
         n = n/2;
    }
     z = z*10 + y;
    printf ("Your no in Binary is : %d",revers(z));
    return 0;
}

// dose not work for even  number .
