#include <stdio.h>
int main (){
    int a[7]={1,2,3,4,5,6,7};
    int b[7];
    for (int i=0;i<=6;++i){
        b[6-i]=a[i];
    }
    for (int j=0;j<=6;++j){
        printf("%d ",a[j]);
    }
    printf ("\n");
     for (int j=0;j<=6;++j){
        printf("%d ",b[j]);
    }
    return 0;
}