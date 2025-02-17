#include <stdio.h>
int main (){
    char ch ;
    printf ("Enter your latter:");
    scanf ("%c",&ch);
    int a = ch ;
    if (a<90){
        if (a>=65){
            printf ("Your enterd latter is capital.");
        }
    }
    else printf ("Your enterd latter is small.");
    return 0;
}