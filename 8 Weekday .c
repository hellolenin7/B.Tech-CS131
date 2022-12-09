#include<stdio.h>
int main()
{
   int dd,mm,yy,q,m,y,h;
   printf("Enter the date\n");
   scanf("%d%d%d",&dd,&mm,&yy);
   q=dd;
   if(m==1)
     {
         m=13;
         y=yy-1;
     }
   if(m==2)
     {
         m=14;
         y=yy-1;
     }
   else 
     {
         m=mm;
         y=yy;
     }
   h=(q+13*(m+1)/5+y+y/4-y/100+y/400)%7;
   printf("The weekday of %d/%d/%d is ",dd,mm,yy);
   switch(h)
    {
        case 0:printf("Saturday\n");
              break;
        case 1:printf("Sunday\n");
              break;
        case 2:printf("Monday\n");
              break;
        case 3:printf("Tuesday\n");
              break;
        case 4:printf("Wednesday\n");
              break;
        case 5:printf("Thursday\n");
              break;
        case 6:printf("Friday\n");
              break;
    }
}
