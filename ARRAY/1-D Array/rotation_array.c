#include<stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    int a[]={1,2,3,4,5};
    int n;
    printf("Enter the number of times you want to rotate the array: ");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
        {
            for (int j=i+n;j<5;j=j+n){
                swap(&a[i],&a[j]);
        }
        }
        for(int i=0;i<5;i++){
            printf("%d ",a[i]);
        }
    return 0;

    }