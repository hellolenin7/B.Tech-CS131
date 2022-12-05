#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,area;
    printf("Enter the values of the side of a triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is %.3f square unit\n",area);
    return 0;
}

