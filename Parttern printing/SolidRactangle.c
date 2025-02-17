#include <stdio.h>
int main (){
    int n,p;
    printf ("Enter no of row:");
    scanf ("%d",&n);
    printf ("Enter no of colleum:");
    scanf ("%d",&p);

    for (int i=1;i<=n;i++){
        for (int j=1;j<=p;j++){
            printf ("* ");
        }
        printf ("\n");
    }
    return 0;
}