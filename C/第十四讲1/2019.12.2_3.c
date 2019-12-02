#include <stdio.h>
int main()
{
    printf("Please input a string:\n");
    char c[100];
    scanf("%s",c+1);
    for(int i=1;c[i]!=0;i++)
        if(c[i]>'9'||c[i]<'0')
        {
            printf("The string is not digit string.");
            return 0;
        }
    printf("The string is digit string.");
    return 0;
}
