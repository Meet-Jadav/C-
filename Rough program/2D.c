// program to take input for a 2D matrix and print it .
#include <stdio.h>
int main (){
    int arr[3][3];
    for (int i=0;i<6;i++){
        for (int j=0;j<3;j++){
            if(i<3){
                printf ("Enter a%d%d :",i,j);
                scanf("%d ",&arr[i][j]);
            }
            else printf ("%d ",arr[i-3][j]);
        }
        printf ("\n");
    }
    return 0;
}

// It give an error ..  run the program and see .
