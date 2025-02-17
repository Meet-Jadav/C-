#include <stdio.h>
int main (){
    int arr [5];
    for (int i=0;i<=4;i++){
        printf ("\nEnter number %d: ",i+1);
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<=4;i++){
        printf ("\nThe arrays no. %d is %d",i+1,arr[i]);
    }

    return 0;
}

// Array printing.