#include <stdio.h>
int main() 
{
    int m1,m2,m3,m4,small,final_mark;
    printf("Enter your marks:\n");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    small=m1;
    if(small>m2)
      small=m2;
    if(small>m3)
      small=m3;
    if(small>m4)
      small=m4;
    final_mark=((m1+m2+m3+m4)-small)/3;
    printf("The average mark of the test is %d",final_mark);
    return 0;
}
