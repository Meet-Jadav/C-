#include <stdio.h>
int main (){
    int a ;
    printf ("Enter value of a :");
    scanf("%d",&a);
    int b;
    printf ("Enter value of b :");
    scanf ("%d",&b);
    int r = (a)-(b*(a/b));
    printf ("The reminder is: %d", r);
    return 0;
}

//NOTE;
// (int r = (a)-(b*(a/b)); we can write this instade of that 
// int r = a % b 
// % is for reminder when we devide a to b.