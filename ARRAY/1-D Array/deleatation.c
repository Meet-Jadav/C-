#include <stdio.h>

void display(int* nums,int numsize){
    for (int i=0;i<numsize;i++){
        printf("%d ",nums[i]);
    }
}

int removeDuplicates(int* nums, int numsSize) {
    int k = 1;
    for (int i=1;i<numsSize;i++){
        if(nums[i-1]==nums[i]){
           continue;
        }
        else {
            nums[k] = nums[i];
             k++;
        }
    }
    return k;
}


int main (){
    int arr[10] = {0,1,1,2,3,3,4,5,5,6};
   int x = removeDuplicates(arr,10);
   printf("%d \n",x);
   display(arr,x);
    return 0;
}

//  0,0,1,2,3,3,4,5,6,7