// # include <stdio.h>
// int main (){
//     int a,d,n;
//     printf("Enter your first term:");
//     scanf ("%d",&a);
//     printf("Enter your commen difference:");
//     scanf ("%d",&d);
//     printf ("Enter no of terms:");
//     scanf ("%d",&n);
//     for (int b=a;b<=(a+((n-1)*d)) ;b=(b+d)){
//         printf ("%d ",b);
//     }
//     return 0;
// }


//For not usinfg nth term formula.
#include <stdio.h>
#include <limits.h>
int main (){
    int a,d,n,c=1;
    printf ("Enter your first term :");
    scanf ("%d ",&a);
    printf ("Enter your commen difference :");
    scanf ("%d",&d);
    printf ("Enter no of terms:");
    scanf ("%d",&n);
    for (int i=a;i<=INT_MAX;i=i+d){
        a++;
        if (a<+n){
            printf("%d ",i);
        }
    }
    return 0;
}