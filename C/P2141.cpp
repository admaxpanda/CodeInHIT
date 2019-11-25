#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmpp(const int a,const int b)
{
    return a>b;
}
int vis[100000];
int main()
{
    int n,a[120];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+n+1,cmpp);
    int ans=0;
    //for(int i=1;i<=n;i++)
    //    printf("%d ",a[i]);
    //printf("\n");
    for(int i=1;i<=n;i++)
    {
        for(int k=i+1;k<=n;k++)
        {
            for(int j=k+1;j<=n;j++)
            {
                if(a[i]==a[k]+a[j])
                {
                    if(vis[a[i]]==0)
                    {
                        ans++;
                        vis[a[i]]=1;
                    }//printf("%d %d %d %d\n",a[i],a[j],a[k],a[j]+a[k]);
                }
            }
        }
    }
    printf("%d",ans);
    return 0;
}
