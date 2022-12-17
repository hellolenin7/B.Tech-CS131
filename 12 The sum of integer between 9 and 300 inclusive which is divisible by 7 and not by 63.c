#include<stdio.h>
int main()
{
    int i,sum;
    sum=0;
    for(i=9;i<=300;i++)
    {
        if(i%7==0 && i%63!=0)
        sum=sum+i;
    }
    printf("The sum of integers %d is %d",i,sum);
}
