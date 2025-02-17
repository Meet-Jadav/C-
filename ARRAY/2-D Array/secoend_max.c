// program to find secoend largest and secoend smallest element in the array .
#include <stdio.h>
#include <limits.h>
int main (){
    int arr[2][2];
    
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf ("Enter number :");
        scanf ("%d",&arr[i][j]);
    }
    }
    int a, max = INT_MIN, min = INT_MAX ,b;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            if (max<arr[i][j]){
                a = max ;
                max = arr[i][j];
            }
            else if ( a<arr[i][j] && a!=arr[i][j]){
                a = arr[i][j];
            }
            if (min > arr[i][j]){
                b = min;
                min = arr[i][j];
            }
            else if (a > arr[i][j] && a!=arr[i][j]){
                b = arr[i][j];
            }
        }
    }
    printf ("The secoend largest element in array is %d\n",a);
    printf ("The secoend smallest element in array is %d",b);
    return 0;
}