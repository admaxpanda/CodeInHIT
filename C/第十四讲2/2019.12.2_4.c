#include <stdio.h>
struct x
{
    int i;
    struct x *nxt,*lst;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct x *a=(struct x *)calloc(n,sizeof(struct x));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i].i);
        if(i!=0)
            a[i].lst=&a[i-1];
        else
            a[i].lst=NULL;
        if(i!=n-1)
            a[i].nxt=&a[i+1];
        else
            a[i].nxt=NULL;
    }
    struct x *p;
    for(p=&a[0];p!=NULL;p=p->nxt)
        printf(" %d",p->i);
    printf("\n");
    for(p=&a[n-1];p!=NULL;p=p->lst)
        printf(" %d",p->i);
    return 0;
}
