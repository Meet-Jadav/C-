// We are going to write a progrem which can revers a number.

#include <stdio.h>
int main (){
    int x ;
    printf ("Enter your no:");
    scanf ("%d",&x);
    int y = 0;
while (x!=0){
    y = y*10;
    y = y + x%10;
    x = x/10;
}
    printf (" The revers of the no is:%d",y);
    return 0;
}
// It give mistake after 8 degits .
// Reasone : If we add number greter then 8 degits it goes out of 
// the range of int data type .

// We can also write this ,

// int y = x%10;
//     while (x!=0){
//         x = x/10;
//         y = y*10 + x%10;
//     }
//      y = y/10;