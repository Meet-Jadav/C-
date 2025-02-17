
// // program to do multiplication of degits of a given no .
// // by using recursion & store it in structure .
// #include <stdio.h>

// int pro(int n);
// // i am not writing the function here because  the structure is not acessable here.
// // insted of this i will declere the function here and write it at the end of the program .


// // NOTE : AS alternate methode I can initialize the structur at the top of the coed .
// int main (){
//     struct num{
//         int input ;
//         int product;
//     }n;
//     printf ("Enter your degits:");
//     scanf ("%d",&n.input);
//     pro(n.input);

//     /*    // This is also not working .  The variable is not acessiable.
//     int pro(int a){
//         if(a==0) return 1;
//     n.product = n.product*(a%10);
//     a = a/10;
//     pro(a);
//     return n.product;
//     }
//     */
//       printf ("The product of the degits of the given no is :%d",n.product);

//     return 0;
// }


// See the uper code one time ...

#include <stdio.h>
int prod = 1;
struct num{
    int input;
    int product;
}n;


int pro(int a){
    if(a!=0) {
    prod = prod * (a%10);
    a = a / 10;
    pro(a);
    }
    return prod;
}

int main (){
    printf("Enter your number:");
    scanf ("%d",&n.input);
    n.product = pro(n.input);
    printf ("The multiplication of the degits is = %d",n.product);
    return 0;
}