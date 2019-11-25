#include <stdio.h>
int main()
{
    int n;char x;
    tip1:printf("Input days:\n");
    int c=scanf("%d",&n);
    if(c!=1){c=getchar();goto tip1;}
    if(n<=0)goto tip1;
    int a=1;
    for(int i=2;i<=n;i++)
    {
        a=(a+1)*2;
    }
    printf("x=%d",a);
}
