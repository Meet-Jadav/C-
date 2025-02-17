//wap to find age criteare for entered state .
#include <stdio.h>
int main (){
    int a;
    printf ("Enter 1 for Gujarat.\n");
    printf ("Enter 2 for Rajasthan.\n");
    printf ("Enter 3 for mumbai.\n");
    printf ("Enter 4 for Delhi.\n");
while (a=5){
    int n;
    printf ("Enter your state number :");
    scanf ("%d",&n);
   if (n==1)    printf ("This state's age limit for voting is 18.");
   else if (n==2)    printf ("This state's age limit for voting is 17.");
   else if (n==3)    printf ("This state's age limit for voting is 15.");
   else if (n==4)    printf ("This state's age limit for voting is 21.");
   else printf ("No data about that state, so genral age limit for vating is 18 years.");
     } return 0;
}