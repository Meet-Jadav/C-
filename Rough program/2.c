// // some random program 
// #include <stdio.h>
// int a = 10;
// void fun (){
//     int a = 10;
// }
// int main (){
//     printf ("Value of a in main function = %d",a);
//     fun ();
//     return 0;
// }


// Q-1.
// #include <stdio.h>
// int main (){
//     int x=10,y=20,z=5;
//     printf("%d",x<y<z);
//     return 0;
// }

// Q-2.
// #include <stdio.h>
// int main (){
//    struct test
//    {
//     char c;
//     int i;
//     double d;
//    }t;
//    printf("%d\n",sizeof(t.c));
//    printf("%d\n",sizeof(t.d));
//    printf("%d\n",sizeof(t.i));
//    printf("%d\n",sizeof(t));
//     return 0;
// }

//  Q
#include <stdio.h>  
int main (){
    int a;
    int arr[5] = {1,2,3,4,5};
    arr[1] = ++arr[1];
    a = arr[1]++;
    printf("%d",a);
    arr[1] = arr[a++];
    printf("%d %d",a,arr[1]);
    return 0 ;
}