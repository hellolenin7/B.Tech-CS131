#include<stdio.h>
#include <math.h>
int main()
{
    int x,n;
    float y;
    printf("Enter the values of x and n:\n ");
    scanf("%d%d",&x,&n);
    switch(n)
     {
         case 1:y=1+x;
                break;
         case 2:y=1+(float)x/n;
                break;
         case 3:y=1+pow(x,n);
                break;
        default:y=1+n*x;
                break;
     }
   printf("The value of y is %.3f",y); 
   return 0;
}
