#include <stdio.h>
int main (){
    int arr[3];
    for (int i=0;i<3;i++){
        printf ("Enter your no :");
        scanf ("%d",&arr[i]);
    }
    int j;
    for (int i=0;i<3;i++){
        for ( j=0;j<=i;j++){
            printf ("%d",arr[i]);
        }
        printf ("\n");
    }
    for (int i=1;i>=0;i--){
        for (int k=1;k<=j-1;k++){
            printf ("%d",arr[i]);
        }
        j--;
        printf ("\n");
    }
    return 0;
}