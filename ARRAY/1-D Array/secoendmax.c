#include <stdio.h>
#include <limits.h>
int main (){
    int arr[5]={1,22,5,19,22,};
    int max = INT_MIN;  // int ni min value mali gai max variable ne.
    int smax = INT_MIN; 
    for (int i=1;i<=4;i++){
        if (max < arr[i] ){
        max = arr[i];
        }
    }
     for (int i=1;i<=4;i++){
        if (smax < arr[i] && arr[i]!=max){
        smax = arr[i];
        }
    }
     printf ("The secoend largest element of array is = %d", smax );

    return 0;
}