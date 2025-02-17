// With the usage of function .

// #include <stdio.h>
// int factorial (int x){
//     int y=1;
//     for (int i=1;i<=x;i++){
//         y=(y*i);
//         }  // give 1*2*3...*x=x!
//         return y;
// }

// int combination (int n,int r){
//    int  ncr = factorial(n)/(factorial(r)*factorial(n-r));
//     return ncr;
// }
// int main (){
//         int n;
//         printf ("Enter n:");
//         scanf ("%d",&n);
//         for (int i=0;i<=n;i++){
//             for (int k=0;k<=n-i;k++){
//                     printf (" ");
//                 }
//             for (int j=0;j<=i;j++){
//                 int ncr =combination(i,j);
//                 printf ("%d ",ncr);
//             }
//             printf ("\n");
//         }
//         return 0;
// }

/*Without use of Function .*/  // Good. from other .  // without error,

# include <stdio.h>
int main (){
    int n;
    printf ("Enter no of line:");
    scanf ("%d",&n);
    
    for (int i=0;i<=n;i++){
       for (int k=0;k<=n-i;k++){
         printf (" ");
       }
        int a=1;
        for (int j=0;j<=i;j++){
              printf ("%d ",a);
            a = a* (i-j)/(j+1);
        }
        printf ("\n");
    }
    return 0;
}

// Advantages :
/*
-in upper program after line 12 it dose not give correct answer.
- In this code that probleam is solved .
-- less codding .
-- less computation for computer .
-- no using of function .
*/