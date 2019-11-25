#include <stdio.h>
int main()
{
    int a,n,ans=0;
    printf("Input a,n:\n");
    scanf("%d,%d",&a,&n);
    for(int i=1;i<=n;i++)
    {
        //printf(" ");
        int tot=a;
        for(int k=1;k<i;k++)
            tot*=10;
        ans+=tot*(n-i+1);
    }
    printf("sum=%ld\n",ans);
}
