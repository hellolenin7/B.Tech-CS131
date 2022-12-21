#include<stdio.h>
int main()
{
    int n,sum=0;
    while(1)
      {
          printf("Enter an integer between 10 and 30:\n");
          scanf("%d",&n);
          if(n>10 && n<30)
              break;
      }
    if(n%3==0)
      {
          for(int i=n-1;i<=2*n-1;i++)
                 sum=sum+i*i;
      }
    else
      {
          for(int i=n+1;i<=2*n+1;i++)
                  sum=sum+i*i;
      }
    printf("Sum of the series with n=%d is %d\n",n,sum);
}
