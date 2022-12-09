#include <stdio.h>
int main() 
{
    char c;
    printf("Enter the character;\n");
    scanf("%c",&c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
     printf("%c is vowel",c);
    else
     printf("%c is not vowel",c);
    return 0;
}
