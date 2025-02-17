#include<stdio.h>
int main (){
int rows;
printf ("Enter no of rows:");
scanf ("%d",&rows);
 for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows-i; ++j) {             
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; ++j) {                        
            if (j<=i){
                printf("%d",j);
            }
            else {
                printf ("%d",(j-i));
            }
        }
        printf("\n");
    }
    return 0;
}
