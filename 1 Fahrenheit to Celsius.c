#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%f",&f);
    c=5.0/9*(f-32);
    printf("The tempeerature in Celsius is %.3f",c);
    return 0;
}
