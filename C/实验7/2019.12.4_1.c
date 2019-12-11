#include <stdio.h>
int main()
{
    int n,m,max=-1e9,x,y;
    scanf("%d%d",&n,&m);
    int *a=(int *)calloc(n*m,sizeof(int));
    for(int i=0;i<n*m;i++)
        scanf("%d",a+i);
    for(int i=0;i<n*m;i++)
        if(max<*(a+i))
        {
            max=*(a+i);
            x=i/m;
            y=i%m;
        }
    printf("max=%d,row=%d col=%d\n",max,x,y);
}
