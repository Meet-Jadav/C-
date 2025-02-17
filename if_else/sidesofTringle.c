#include <stdio.h>
int main (){
    float a ;
    printf ("Enter first side :");
    scanf ("%f",&a);
     float b ;
    printf ("Enter second side :");
    scanf ("%f",&b);
     float c ;
    printf ("Enter third side :");
    scanf ("%f",&c);
    if (a+b>c && a+c>b && b+c>a){
        printf ("Valid Tringle.");
    }
    else {
        printf ("Invalid Tringle.");
    }
    return 0;
}