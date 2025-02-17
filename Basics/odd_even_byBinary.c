#include <stdio.h>
int main (){
    int n;
    printf("Enter the no:");
    scanf ("%d",&n);
    if(n&1){    // it will check the no's  final bit if it's 0 then even & if it's 1 then odd.
        printf("odd");
    }
    else printf("Even");
    return 0;
}