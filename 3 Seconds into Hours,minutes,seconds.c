#include <stdio.h>
int main()
{
    int p=31558150,d,h,m,s,r;
    d=p/86400;
    r=p%86400;
    h=r/3600;
    r=r%3600;
    m=r/60;
    s=r%60;
    printf("Earth takes %d days,%d hours,%d minutes and %d seconds in one revolution.",d,h,m,s);
    return 0;
}
