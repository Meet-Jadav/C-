// Program to check if a matrix is an Isentitiy matrix or not /.
#include <stdio.h>
 int main (){
 int arr[3][3];
 int a = 0;
     for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf ("Enter a[%d][%d]element:",i,j);
            scanf ("%d",&arr[i][j]);
            if (i==j&&arr[i][j]==1){
                a = 1;
            }
            else if (i!=j&&arr[i][j]==0){
                a=1;
            }
            else {
                a=0;
                break;
            }
        }

    }
    if (a==1){
        printf ("Entered matrix is an identity matrix.");
    }
    else printf ("Entered matrix is not an identitiy matrix.");     
return 0;
 }