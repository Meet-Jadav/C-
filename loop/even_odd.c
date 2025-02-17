// Methode 1:

 /* #include <stdio.h>
 int main (){
     for (int i=1;i<=100;i++){
         if (i%2==0){              // for odd do [ if (i%2!=0)].
             printf ("%d ",i);
         }
   }
     return 0;
} */

/*
//Methode 2:
# include <stdio.h>
int main (){
    for (int i=2;i<=100;i=i+2){   // For odd start 'i' from 1.
        printf ("%d ",i);
    }
    return 0;
}

*/

// by using Continue .
# include <stdio.h>
int main (){
    for (int i=1;i<=100;i++){  
        if (i%2!=0){   //for even no.
            continue;
        } 
        printf ("%d ",i);
    }
    return 0;
}
