# include <stdio.h>
int main (){
    int y;
    printf ("Enter year:");
    scanf ("%d",&y);
    if (y%4==0){
        printf ("The enterd year is leap year.");
    }
    else {
        printf ("The enterd year is not a leap year.");
    }
    return 0;
}
