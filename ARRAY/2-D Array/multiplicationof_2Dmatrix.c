#include <stdio.h>
int main (){
    int a[3][3];
    int b[3][3];
    int arr[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf ("Enter element a[%d][%d]: ",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
     for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf ("Enter element b[%d][%d]:",i,j);
            scanf ("%d",&b[i][j]);
        }
    }


    //main logic starts .
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum = 0;
            for (int k=0;k<3;k++){
                int c = a[i][k]*b[k][j];
                sum = sum + c;
                if(k==2) { arr[i][j]=sum;}
            }
        }
    }
    // logic ends.


      for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf ("%d ",arr[i][j]);
        }
        printf ("\n");
    }
    return 0;
}