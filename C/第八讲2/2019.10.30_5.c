#include <stdio.h>
int main()
{
    int n,a[11];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    {
        int m=i;
        for(int k=i+1;k<=n;k++)
            if(a[k]<a[m])
                m=k;
        //printf("%d",m);
        int c=a[i];
        a[i]=a[m];
        a[m]=c;
    }
    for(int i=1;i<=n;i++)
        printf("%d\n",a[i]);
    return 0;
}
