#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,digit,sum=0,temp;
	printf("Enter the three digits number:\n");
	scanf("%d",&n);
	if(n<100 || n>999)
	{
		printf("Invalid input\n");
	        exit(0);
	}
	temp=n;
	while(temp)
	{
		digit=temp%10;
		sum=sum+pow(digit,3);
		temp=temp/10;
	}
	if(sum==n)
		printf("%d is Armstrong number\n",n);
	else
		printf("%d is not Armstrong number\n",n);
}


