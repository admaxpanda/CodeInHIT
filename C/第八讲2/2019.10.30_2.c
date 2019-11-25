#include <stdio.h>
int main()
{
    int n,a[1005],ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
        for(int k=i+1;k<=n;k++)
            for(int j=1;j<=n;j++)
                if(a[i]+a[k]==a[j])
                    ans++;
    printf("%d",ans);
}
