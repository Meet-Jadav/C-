#include <stdio.h>
int main (){
    int i;
    int b;
    printf ("enter value of i:");
    scanf ("%d",&i);
    printf ("Enter value of b:");
    scanf ("%d",&b);
     while (i<100 , b > 0){
         printf("%d %d\n", i,b);
         i++;
         b--;
     }
    return 0;
}