#include <stdio.h>
int main()
{
    int i,f,n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    f=1;
    for(i=2;i<=n;i++)
     {
         f=f*i;
     }
    printf("The factorial of %d is %d",n,f);
    return 0;
}
