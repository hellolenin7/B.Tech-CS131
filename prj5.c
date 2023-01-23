#include<stdio.h>
int checkPerfect(int);
int main()
{
	int n;
	printf("Enter the number to be checked as perfect or not:\n");
	scanf("%d",&n);
	if(checkPerfect(n))
	{
		printf("%d is a perfect number\n",n);
	}
	else
	{
		printf("%d is not  a perfect number\n",n);
	}
}
	int checkPerfect(int n)
	{
		int i,sum=0;
		printf("The factors of %d are :\n ",n);
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)
			{
				sum=sum+i;
				printf("%d\t",i);
			}
		}
		printf("\n");
		if(sum==n)
		    return 1;
		else
		    return 0;
		

	}
			






