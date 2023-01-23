
#include<stdio.h>
int factorial(int);
int main()
{
	int n,r,f;
	printf("Enter the values of n and r:\n");
	scanf("%d%d",&n,&r);
	f=factorial(n)/(factorial(r)*factorial(n-r));
	printf("The value of nCr is %d\n",f);
}
int factorial(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
