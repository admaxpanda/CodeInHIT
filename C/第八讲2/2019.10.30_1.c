#include <stdio.h>
int main()
{
    int a[11],n,tot=0;
    for(int i=1;i<=10;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
        if(n+30>=a[i])tot++;
    printf("%d",tot);
    return 0;
}
