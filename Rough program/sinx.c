#include<stdio.h>
float F(float x,int n);
int fact(int n);
float pow(float a,int b);

int main()
{
	float x;
	int n;
	printf("Enter x:");
	scanf("%f",&x);
	printf("Enter n:");
	scanf("%d",&n);
	
	if(n%2==0)
	printf("Error");
	else
	printf("%f",F(x,n));
	return 0;
}

float F(float x,int n)
{
	float f;
	if(n==1)
	return x;
	float pox=pow(x,n);
	float po1=pow(-1,(n+3)/2);
	int factorial=fact(n);
	f=F(x,n-2)+pox*po1/factorial;
	return f;

}

int fact(int n)
{
	int f;
	if(n==1)
	return 1;
	f=n*fact(n-1);
	return f;
}

float pow(float a,int b)
{
	int i;
	float p=1;
	for(i=1;i<=b;i++)
	p=p*a;
	return p;
}