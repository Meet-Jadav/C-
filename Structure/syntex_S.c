#include <stdio.h>

 struct pokemon
    {
        int Hp;
        int Speed;
        int attack;
        int tier; 
    }pickachu ;/* we can write this insted of initlizing as below*/ 

     // We can also initialize the structure in both inside or outside of the main function .



int main (){

// Initialization of an structure. 
   

   // struct pokemon pickachu;
    pickachu.attack=120;
    pickachu.Hp=100;
    pickachu.Speed=130;
    pickachu.tier='S';

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.Speed = 90;
    charizard.Hp = 110;
    charizard.tier = 'A';

//Input by user.
printf ("Enter Speed of Pickachu :");
scanf ("%d",&pickachu.Speed);

// Output .
    printf ("%c",pickachu.tier);
     printf ("\n%c",charizard.tier);
      printf ("\n%d",charizard.Speed);
       printf ("\n%d",pickachu.Speed);
    return 0;
}