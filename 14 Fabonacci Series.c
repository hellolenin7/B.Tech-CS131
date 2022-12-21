#include <stdio.h>
int main()
{
    int n,p1=0,p2=1,c=0,i=0;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    printf("The Fabonacci Series is ");
    for(i=1;i<=n;i++)
     {
         printf("%d\,",p1);
         c=p1+p2;
         p1=p2;
         p2=c;
     }
    return 0;
}
