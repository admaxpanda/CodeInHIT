#include <stdio.h>
//皮了一下用链表写的
int lst[501],nxt[501];
int main()
{
    nxt[0]=1;
    for(int i=1;i<500;i++)
        lst[i]=i-1,nxt[i]=i+1;
    int a,b;
    printf("Please input two integers:\n");
    scanf("%d%d",&a,&b);
    lst[1]=a;nxt[a]=1;
    int k=0;
    while(a--)
    {
        for(int i=1;i<=b;i++)
            k=nxt[k];
        nxt[lst[k]]=nxt[k];
        lst[nxt[k]]=lst[k];
        printf("%d",k);
    }
}
