#include <stdio.h>

int main(){
    float r;
    printf("Enter radius of circle:");
    scanf("%f",&r);
    float pi = 3.1415;
    float A = pi*r*r ;
    printf("The area of circle is :%f",A);
    return 0;
}