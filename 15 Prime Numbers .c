#include <stdio.h>
int main()
{
    int n,flag,count=0;
    printf("The Prime Numbers between 1 to 100 are:\n");
    for(n=2;n<100;n++)
      {
          flag=0;
          for(int i=2;i<=n/2;i++)
             {
                 if(n%i==0)
                   {
                       flag=1;
                       break;
                   }
             }
          if(flag==0)
               {
                   count++;
                   printf("%d\t",n);
                   if(count==4)
                      {
                          printf("\n");
                          count=0;
                      }
               }
      }
}  
