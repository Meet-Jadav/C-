#include <stdio.h>
int main (){
    float p;
    printf ("Enter percentage:");
    scanf ("%f",&p);
    if (p<=100 && p>=90){
        printf ("Grade: Excellent");
    }
    else if (p<90 && p>=80){
        printf("Grade:Very Good");
    }
     else if (p<80 && p>=70){
        printf("Grade: Good");
    }
     else if (p<70 && p>=60){
        printf("Grade:Can do better.");
    }
      else if (p<60 && p>=50){
        printf("Grade:Avrage.");
    }
      else if (p<50 && p>=40){
        printf("Grade:Improvement needed.");
    }
     else  {
        printf("Grade:Fail.");
     }
    return 0;
}