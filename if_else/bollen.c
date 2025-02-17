// #include <stdio.h>
// int main (){
//     int x = 3;
//     printf ("%d",x==3);
//     return 0;
// }

#include <stdio.h>
int main (){
    int x = 3,y,z;
    y = x = 9;
    z = x<10;  // here x<10 is true but < is a relation and z is
    //  an integer so it can take only two value as per boolen 
    //  exprestion so cause of x<10 is true z take  value equal to 1.
    printf ("x=%d \n y =%d \n z=%d",x,y,z);

    return 0;
}