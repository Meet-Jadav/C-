#include <stdio.h>
int main (){
    long long int n = 5;
    int* a = &n; // missmatch of thype of the pointer .
    
    printf("%zu\n",sizeof(a));  // pointer size 
    printf("%zu\n",sizeof(n));   // n size 

    printf("%lld\n",n);
    printf("%d",*a);
    return 0;
}