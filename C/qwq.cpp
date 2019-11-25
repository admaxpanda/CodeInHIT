#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[200]={0,1};
    for(int i=2;i<=105;i++)
    {
        if(a[i-1]<=2*i)
            a[i]=3*a[i-1]+1;
        else
            a[i]=a[i-1]-i;
    }
    int ans=0;
    for(int i=1;i<=105;i++)
    {
        if(a[i]>100)
        {
            cout<<ans<<" "<<i;
            return 0;
        }
        ans+=a[i];
    }
    return 0;
}
