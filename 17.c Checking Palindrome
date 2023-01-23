#include<stdio.h>
int main()
{
	int orig,rev=0,rem,temp;
	printf("Enter the non negative integer:\n");
	scanf("%d",&orig);
	temp=orig;
	while(temp)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(rev==orig)
		printf("%d is Palindrome\n",orig);
	else
		printf("%d is not Palindrome\n",orig);
}


