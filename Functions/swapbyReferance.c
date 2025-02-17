#include <stdio.h>
void swap (int* x,int *y ){
    int temp;
    temp = *x; // temp = a (5).
    *x = *y;    // a = b(9).
    *y = temp;  // b = temp = former a (5).
}
int main (){
    int a = 5;
    int b = 9;
    swap(&a,&b);
    printf ("The value of a is %d\n",a);
    printf ("The value of b is %d",b);
    return 0;
}