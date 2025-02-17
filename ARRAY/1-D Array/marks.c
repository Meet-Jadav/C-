#include <stdio.h>
int main (){
    int marks [10];
    for (int i=0;i<=9;i++){
        printf ("\nEnter marks of student %d: ",i+1);
        scanf ("%d",&marks[i]);
        }
        printf ("The index of failed students are :");
     for (int i=0;i<=9;i++){   
        if (marks[i]<=35) printf ("%d ",i);
        else continue;
    }
    return 0;
}