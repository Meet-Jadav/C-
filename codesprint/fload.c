#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int* arr,int size){
    int max = arr[0];
    for (int i=0;i<size;i++){
        if (max<arr[i]) max = arr[i];
    }
    return max;
}

int min (int a , int b){
    if( a < b) return a;
    else return b;
}

int check(int* arr,int size,int rate_flow,int i){
    int time;
    if (arr[i]==0) {
        return 0;
    }

    //corner cases
     if((i)==size || ((i)==0)){
        if (i==0){
            if(arr[i]>arr[i+1]){
                if (arr[i]%rate_flow)
                 return ((arr[i]%rate_flow)+(arr[i]/rate_flow));
            }
            else return ((arr[i+1]%rate_flow)+(arr[i+1]/rate_flow));
        }
        else if (i==size){
            if(arr[i]<arr[i-1]){
               return ((arr[i-1]%rate_flow)+(arr[i-1]/rate_flow)); 
            }
            else return ((arr[i-1]%rate_flow)+(arr[i-1]/rate_flow));
        }
    }
    // corner case end.
    
    //center cases.
    if ((i+1)<=size && ((i-1)>=0)){
            if(arr[i]<arr[i+1] && arr[i]<arr[i-1]){
            int m = min(arr[i+1],arr[i-1]);
            return ((m%rate_flow)+(m/rate_flow));
        }
    else {
        return ((arr[i]%rate_flow)+(arr[i]/rate_flow));
    }
    }
  return ((arr[i]%rate_flow)+(arr[i]/rate_flow));      
}




int main() {
int test;
printf("Enter No of test:");
scanf("%d",&test);
     for (int a=1;a<=test;a++){   
    int n,k;
    printf("Enter no of House + well :");
    scanf("%d",&n);
    printf("Enter rate of water:");
    scanf("%d",&k);

    int arr[n];
    printf ("Enter arry elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        int arr2[n];
        
        for (int i=0;i<n;i++){
            int time = check(arr,n,k,i);
            arr2[i] = time;
        }
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
         printf("\n");
    }
    return 0;
}