#include <stdio.h>
int main(){
    float a ; // cost price
    printf("Enter cost price:");
    scanf("%f", &a);
    float b ;  // selling price
    printf ("Enter selling price:");
    scanf("%f",&b);
    float c = (b-a);
    float d = (a-b) ;
    if ((b-a) >0){
    {
        printf ("seller made profit of %f$",c);
    }
    if ((b-a)==0)
    {
        printf ("No profit ,No loss.");
    }
    }
    else
    {
        printf("seller made loss of %f$",d);
    }
    return 0; 
}