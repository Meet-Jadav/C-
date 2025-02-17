#include <stdio.h>
int main (){
    int a=5;
    int* x = &a;
    printf ("%p\n",&a);
    printf ("%d",*x);
    return 0;
}

     // %p thi addrese print thay.
     // %d -- integer  ||  || .
     // %f  -- decimal vali valu .
     //  %c  -- character .