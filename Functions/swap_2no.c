// With help of third variable 

// #include<stdio.h>
// int main (){
//    int a;
//    printf ("Enter a :");
//    scanf ("%d",&a);
//    int b;
//    printf ("Enter b :");
//    scanf ("%d",&b);
//    int c =a;
//    printf ("The valu of a is : %d\n",b);
//    printf ("The valu of b is : %d",c);
//     return 0;
// }

// Without help of third variable.  //BY POINTERS.
//-----------------------------------------------------------------------------------
// # include <stdio.h>

// void swap (int* x , int* y ){           
//     int temp = *x;
//     *x=*y;                              // we can do the same thing without using pointers/
//     *y=temp;                            // we can do this by using array.
//     return ;
// }
// int main (){
//     int a ;
//     printf ("Enter value of a :");
//     scanf ("%d",&a);

//     int b ;
//     printf ("Enter value of b :");
//     scanf ("%d",&b);

//     // a = a+b;
//     // b = a-b;
//     // a = a-b;
//     swap (&a,&b);
    
//      printf ("\n The value of a is: %d\n",a);

//      printf (" The value of b is: %d",b);
     
//     return 0;
// }
//-----------------------------------------------------------------------------------------
// By use of ARRAY.
#include <stdio.h>
void swap(int x[] ){
 int temp = x[0];
 x[0]=x[1];
 x[1]=temp;
 return;
}

int main (){
    int arr[2];
    printf("Enter first no :");
    scanf ("%d",&arr[0]);
      printf("Enter secoend no :");
    scanf ("%d",&arr[1]);
    swap (arr);
    printf ("First no is : %d",arr[0]);
    printf ("\nSecoend no is : %d",arr[1]);
    return 0;
}