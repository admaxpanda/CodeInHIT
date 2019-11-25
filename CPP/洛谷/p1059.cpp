#include <bits/stdc++.h>
using namespace std;
int n,cnt,tong[100000001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>cnt;
        tong[cnt]++;
    }
    for(int i=1;i<=100000000;i++)
    {
        if(tong[i])cout<<i<<" ";
    }
    return 0;
}
