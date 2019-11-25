#include <stdio.h>
int main()
{
    int n,a[110];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        int ans=0;
        for(int k=1;k<i;k++)
        {
            if(a[i]>a[k])
                ans++;
        }
        printf("%d ",ans);
    }
    return 0;
}
