#include <stdio.h>
int main (){
    int n;
    printf ("Enter no of terms :");
    scanf("%d",&n);
    int sum = 0;
    // for (int i = 1;i<=n;i++){
    //     if (i%2==0)     sum = sum + (i*(-1)); // sum = sum -i;
    //     else    sum = sum + i;
    // }
    // for lesser calculation for com. 

    if (n%2==0)  sum = -n/2;
    else sum = -n/2 + n;
    printf ("Your sum is equal to: %d",sum);
    return 0;
}