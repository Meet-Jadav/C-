# include <stdio.h>
int main (){
    int a,r,n;
    printf ("Enter first term :");
    scanf ("%d",&a);
     printf ("Enter commen ratio :");
    scanf ("%d",&r);
     printf ("Enter no of terms :");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++){
        printf ("%d ",a);
        a=(a*r);
    }
    return 0;
}

// for fractional commen ratio .
/*
# include <stdio.h>
int main (){
    float a,r,n;
    printf ("Enter first term :");
    scanf ("%f",&a);
     printf ("Enter commen ratio :");
    scanf ("%f",&r);
     printf ("Enter no of terms :");
    scanf ("%f",&n);
    for (int i=1;i<=n;i++){
        printf ("%f \n",a);
        a=(a*r);
    }
    return 0;
}
*/