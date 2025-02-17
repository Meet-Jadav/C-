// how to enter a string into the predfined structur .
#include <stdio.h>
#include <string.h>
int main (){

    struct anime 
    {
        char name[50];
        float rating;
    }a,b,c;

    strcpy(a.name,"Naruto");
    a.rating = 9.8;

    strcpy (b.name,"Sword art online");
    b.rating = 9.7;

    strcpy (c.name,"Jujutsu Kaisean");
    c.rating = 9.3;

    puts(a.name);
    printf ("Rating = %.1f/10 \n\n",a.rating);
     puts(b.name);
    printf ("Rating = %.1f/10 \n\n",b.rating);
     puts(c.name);
    printf ("Rating = %.1f/10 \n\n",c.rating);
    return 0;
}