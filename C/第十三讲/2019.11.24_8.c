#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int *a=(int *)calloc(n*m,sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",a+i*m);
    for(int i=0;i<n-1;i++)
        printf("%d\n",*(a+i*m));
    printf("%d\n",*(a+n*m-m));
    return 0;
}
