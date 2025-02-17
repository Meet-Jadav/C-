// #include <stdio.h>
// int main (){
//     int arr[5]={1,12,5,19,2,};
//     // int max = 0;
//     int max = arr[0];
//     for (int i=1; i<=4;i++){
//         if (max < arr[i]){
//         max = arr[i];
//         }
//     }
//     printf ("The maximum element of array is = %d", max );
//     return 0;
// }


#include <stdio.h>
#include <limits.h>
int main (){
    int arr[5]={1,12,5,19,2,};
    int max = INT_MIN;  // int nii min value mali gai max variable ne.
    for (int i=1;i<=4;i++){
        if (max < arr[i]){
        max = arr[i];
        }
    }
    printf ("The maximum element of array is = %d", max );
    return 0;
}