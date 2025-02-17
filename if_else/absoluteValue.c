#include <stdio.h>
int main (){
    int i;
    printf ("Enter the no:");
    scanf("%d",&i);
    if (i>0){
        printf ("The absolute value is %d",i);
    }
    else {
        printf ("The absolute value is %d",i*(-1));
    }
    return 0;
}