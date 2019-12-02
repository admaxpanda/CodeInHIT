#include <stdio.h>
int zhishu(int x)
{
    if(x==1)return 0;
    if(x==2)return 1;
    for(int i=2;i<x;i++)
        if(x%i==0)
            return 0;
    return 1;
}
int main()
{
    int a,b,tot=0;
    printf("please input c,d(c>2):\n");
    scanf("%d,%d",&a,&b);
    for(int i=a;i<=b;i++)
        if(zhishu(i))
            if(zhishu(i+2))
            {
                printf("(%d,%d)\n",i,i+2);
                tot++;
            }
    printf("total=%d\n",tot);
    return 0;

}
