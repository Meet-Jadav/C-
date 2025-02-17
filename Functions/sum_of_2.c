# include <stdio.h>
int sum(int x,int y){
    return x+y;
}

int main (){
    int a,b;
    printf("Enter first no:");
    scanf("%d",&a);
     printf("Enter secoend no:");
    scanf("%d",&b);
    // int add = sum(a,b);
    // printf ("The sum is = %d ",add);
    printf ("Sum = %d",sum(a,b));
    return 0;
}
/*
int sum(x,y){
    return x+y;
}

o/p : warning: type of 'y' defaults to 'int' [-Wimplicit-int]
Enter first no:5
Enter secoend no:6
Sum = 11
*/