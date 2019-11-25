#include <stdio.h>
#include <string.h>
char c[200];
int a[200];
int main()
{
    scanf("%s",c);
    if(strlen(c)==1){printf("%s",c);return 0;}
    int ans=0;
    c[strlen(c)]='*',c[strlen(c)+1]=0;
    for(int i=1;i<=strlen(c);i++)
    {
            if(c[i]==c[i-1])
                ans++;
            else if(ans)
            {
                //printf("%d",ans);
                a[i-1]=ans+1;
                ans=0;
            }
    }
    //printf("%d",ans);
    //printf("%d",a[2]);
    for(int i=0;i<strlen(c)-1;i++)
        if(a[i])
            printf("%d",a[i]);
        else
            printf("%c",c[i]);
    return 0;
}
