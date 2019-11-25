#include <stdio.h>
int zhishu(int x)
{
    if(x==1)return 0;
    if(x==2)return 1;
    for(int i=2;i<x;i++)
        if(x%i==0)return 0;
    return 1;
}
int main()
{
    int n,sum=0,tot=0;
    printf("Input n(n<=500):");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
        if(zhishu(i))
        {
            tot++;
            printf("%6d",i);
            sum+=i;
            if(tot==10)
                break;
        }
    printf("\nsum=%d\n",sum);
}
