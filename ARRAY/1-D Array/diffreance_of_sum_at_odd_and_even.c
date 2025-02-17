#include<stdio.h>
int main (){
    int arr[7]={1,2,3,4,5,6,7};
    int odd = 0;
    int even =0;
    for (int i=0;i<=6;i++){
        if (i%2==0) even+=arr[i];
        else odd+=arr[i];
    }
    printf ("The diffrence between sum of even and odd is = %d",(even-odd));
    return 0;
}