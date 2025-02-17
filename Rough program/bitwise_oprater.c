//program for bitwise oprater .
#include <stdio.h>
int main (){
    int a = 10,b = 6;
    printf ("%d\n",a&b);
    printf ("%d",a&b && b+1); // && works like AND gate.
    //here  is 0 && 7 (true = 1) = 0  [AND : A.B];
    return 0;
}