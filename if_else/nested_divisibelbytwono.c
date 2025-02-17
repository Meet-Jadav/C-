#include <stdio.h>
int main (){
    int n;
    printf ("Enter a no :");
    scanf ("%d",&n);
    if (n%5==0){
        if (n%3==0){
            printf ("No. is divisibal by 5 and 3 .");
        }
        else {
            printf ("No. is not divisibel by 5 and 3");
        }
    }
    else {
            printf ("No. is not divisibel by 5 and 3");
        }
    return 0;
}