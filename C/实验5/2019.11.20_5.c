#include <stdio.h>
#include <string.h>
void fun(char *s)
{
    for(int i=strlen(s)-1;i>=0;i--)
        printf("%c",s[i]);
    return 0;
}
int main()
{
    char c[200];
    scanf("%s",c);
    fun(c);
    return 0;
}
