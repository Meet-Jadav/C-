// for loop mathi print karvu hoy ane ema .. "j" ma 'i' ni jarur hoy to j ne for loop ni ander difine karvo.
//  change thato i ne vaparva mate te j for ni ander kam karvu pade che.
/*
# include <stdio.h>
int main (){
    int i;
for ( i=1;i<=10;i++){
     int j = (19*i);
    printf ("19 x %d = %d \n",i,j);
}
 
    return 0;
}
*/


// succsesful program .
// # include <stdio.h>
// int main (){
//     int i;
//     for (i=19;i<=190;i=i+19){
//         printf (" %d \n",i);
//     }
   
//     return 0;
// }


// succesful program .

 #include <stdio.h>
 int main (){
    int i;
     int n;
     printf ("Enter no of table :");
     scanf ("%d",&n);
     for ( i=1;i<=10;i=i+1){
         int j = (n*i);
         printf ("%d x %d = %d \n",n,i,j);
     }
     return 0;
 }

 // We can also do this by using the concept of AP.