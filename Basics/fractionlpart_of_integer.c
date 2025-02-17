# include <stdio.h>
int main(){
    float a ;
    printf ("Enter the degit:");
    scanf("%f",&a);
    int b = a ;
    float c = a-b ;
    printf ("Fractional part of given degit is %f", c);
    return 0;
}