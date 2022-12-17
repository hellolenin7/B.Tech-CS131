#include <stdio.h>
int main()
{
   int n,count,sum,small,big;
   float avg;
   printf("Enter the integer one by one and to stop enter the positive number or negative number.\n");
   count=0;
   sum=0;
   while(1)
    {
        printf("Enter the integer:\n");
        scanf("%d",&n);
        if(n<=0)
          break;
        count++;
        if(count==1)
         {
             small=n;
             big=n;
         }
        else
         {
             small=(small>n)? n:small;
             big=(big<n)? n:big;
         }
    sum=sum+n;
    }
    avg=(float)(sum)/count;
    printf("The required values are No. of positive integer enter=%d, Minimum=%d, , Maximum=%d, Average=%.2f\n",count,small,big,avg);
    return 0;
}
