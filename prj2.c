#include<stdio.h>
int isPrime(int);
int main()
{
	int n,flag=0;
	printf("Enter a positive integer:\n");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
			{
			if (isPrime(i))
			  {
			     if(isPrime(n-i))
				{
				  if(flag==0)
				   {
				     printf("Yes,%d can be expressed as the sum of the two prime numbers.The possible combinations are\n",n);
				     flag++;
				   }
			      printf("%d=%d+%d\n",n,i,n-i);	   
			        }
			  }
			 }
	if(flag==0)
	printf("%d cannot be expressed as the sum of two prime numbers\n",n);
}
int isPrime(int n)
{
   for(int i=2;i<=n/2;i++)
      if(n%i==0)
           return 0;
   return 1;
 }


