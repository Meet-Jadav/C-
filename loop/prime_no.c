// by using break;.
/*
# include <stdio.h>
int main ()
{
    int n;
    printf ("Enter a number :");
    scanf ("%d",&n);
    if (n==1){
    printf ("1 is nither prime nor composit.");
    }
    else
    {
    for (int i=2;i<n;i++){
        if (n%i==0){
          printf ("Entered no is composit.");
          break;
        }
          else {
        printf ("Entered no is prime.");
        break;
        }     
    }
}
    return 0;
}
*/


// Without using (break;).------ logicaly;
  # include <stdio.h>
int main ()
{
    int n;
    printf ("Enter a number :");
    scanf ("%d",&n);
    int a=0;
    for (int i=2;i<n;i++){
        if (n%i==0){
          a=1;
          break;
        }     
    }
    if (n==1){
        printf ("1 is nither prime nor composit.");
    }
    else if (a==0) {
        printf ("Entered no is prime.");
        }
    else {
        printf ("Entered no is composit.");
        }
    return 0;
}

