#include<stdio.h>
int main (){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x = 12;
    int count = 0;
    for (int i=0;i<=7;i++){
        for (int j=7;j>i;j--){
            if (arr[i]+arr[j]==x){
                printf ("(%d,%d)\n",i,j);
                 count++;}
            else continue;
        }
    }
    printf ("The no of pairs are %d.",count);
    return 0;
    }
