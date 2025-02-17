//Given an array of integers nums and an integer target,
// return indices of the two numbers such that they add up to target.
#include <stdio.h>
int main(){
    int arr[50];
    int n;
    printf ("how many no do you want to enter:");
    scanf ("%d",&n);
    printf ("Enter the numbers:");
    for (int i=0;i<n;i++){
        scanf ("%d",&arr[i]);
    }
    int target,a,b=-1;
    printf("Enter the target number:");
    scanf ("%d",&target);
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                a = i;
                b = j;
                break;
            }
        }
    }
    if (b!=-1){
    printf ("The indeicies are : [%d,%d]",a,b);
    }
    else {
        printf ("No pair exist.");
    }
    return 0;
}