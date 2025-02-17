#include <stdio.h>
int factorial (int x){
    long long a=1;
    for (int i=x;i>=1;--i){
        a=(a*i);
    }
    return a;
}
int main (){
    int n;
    printf ("Enter n: ");
    scanf("%d",&n);
    printf ("0! = 1\n");
    for (int i=1;i<=n;i++){
        long long  a = factorial(i);
        printf ("%d! = %llu\n",i,a);
    }
    return 0;
}

// error : only give correct ans upto n=12;