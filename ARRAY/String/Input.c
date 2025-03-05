#include <stdio.h>
int main (){
    char str[100];
    printf("Enter your string :");
    scanf("%[^m]",str); // get input untill m is not entered .
    
    printf("Your string :%s",str);
    return  0;
}