#include <stdio.h>
int main()
{
    printf("Input a string:\n");
    char c[100];
    scanf("%s",c+1);
    int lengh=1;
    for(;c[lengh+1]!=0;lengh++);
    for(int i=1;i<=lengh;i++)
        for(int k=i+1;k<=lengh;k++)
            if(c[i]>c[k])c[i]^=c[k]^=c[i]^=c[k];
    printf("%s",c+1);
    return 0;
}
