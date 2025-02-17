#include <stdio.h>
int main (){
    int a,b,c;
    printf ("Enter your first no :");
    scanf ("%d",&a);
     printf ("Enter your secoend no :");
    scanf ("%d",&b);
     printf ("Enter your third no :");
    scanf ("%d",&c);
    if (a>b){
        if (a>c)  printf ("%d is gretest,",a);
        else printf ("%d is gretest",c);
    }
    else {
        if (b>c)    printf ("%d is greatest.",b);
        else    printf ("%d is greatest.",c);
    }
    return 0;
}