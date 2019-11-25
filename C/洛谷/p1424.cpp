#include <stdio.h>
int main()
{
    int x,n;
    int ans=0;
    scanf("%d%d",&x,&n);
//    printf("%d%d",x,n);
    for(int i=1,m=x;i<=n;i++)
    {
        //printf("%d",m);
        if(m==6)m++;
        else if(m==7)m=1;
        else {
            ans+=250;
            m++;
        }
    }
    printf("%d",ans);
}
