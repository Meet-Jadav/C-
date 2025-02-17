#include <stdio.h>
int main (){
    int a=0;
    for (int i=0;i<5;i++){
        for (int j=1;j<5;j++){
            a++;
            if(j==1){
                break;
            }
        }
    }
    printf ("%d",a);
    return 0;
}