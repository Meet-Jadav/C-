#include <stdio.h>
int main (){
    int i = 1;
    do {
        printf ("Hello World.\n");
        i++;
    }
    while (i<0);    // This condition is not hitting, but code is running.
    return 0;
}