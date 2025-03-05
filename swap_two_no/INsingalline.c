#include <stdio.h>
int main (){
    int a = 5;
    int b = 12;
    a = a + b - (b=a); 
     //pela badhane values assinge thase 
    // pachi pricidance check thase .
    // jo same pricidance to L -> R jase .
    printf("a = %d , b = %d",a,b);
    return 0;
}