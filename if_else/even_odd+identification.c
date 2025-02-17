# include <stdio.h>
int main(){
    int n;
    printf ("Enter value of n:");
    scanf ("%d",&n);
    if (n%2==0){
        printf ("Given no'%d' is even",n);
    }
    else {
        printf ("Given no '%d' is odd ", n);
    }
        return 0;
}