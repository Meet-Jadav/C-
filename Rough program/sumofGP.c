#include <stdio.h>
int main (){
    long a = 1;
    long sum = 0;
    int n;
    printf ("Enter no of terms :");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++){
        sum = sum + a;
        a = a*2;
    }
    printf ("Your sum is :%ld",sum);
    return 0;
}