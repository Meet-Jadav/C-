# include <stdio.h>
int main (){
    int arr [5]={2,2,5,9,6};
    int b=0;
    for (int i=0;i<=4;i++){
        b = b + arr[i];
    }
    printf ("Sum of array is ; %d ",b);
    return 0;
}