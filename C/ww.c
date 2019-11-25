#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[10],i,j,k,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++);
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[k])
                k=j;
        }
        if(k!=i)
        {
            temp=a[k];
            a[k]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
