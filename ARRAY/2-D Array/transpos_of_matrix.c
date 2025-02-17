// Program to do Transpos of a given matrix /.
#include <stdio.h>
int main (){
    int arr[3][3];
    int b[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf ("Enter a element:");
            scanf ("%d",&arr[i][j]);
            b[j][i] = arr[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
       printf ("%d ",b[i][j]);
        }
        printf ("\n");
    }
    return 0;
}