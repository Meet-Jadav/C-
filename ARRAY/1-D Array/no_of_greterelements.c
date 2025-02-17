#include <stdio.h>
int main (){
    int arr[7]={1,2,3,4,5,6,7};
    int x;
    printf ("Enter your comparision number :");
    scanf ("%d",&x);
    int count = 0;
    for (int i=0;i<=6;i++){
        if (arr[i]>x) count++;
        else continue;
    }
    printf ("The no of element greter then %d in this array is = %d",x,count);
    return 0;
}