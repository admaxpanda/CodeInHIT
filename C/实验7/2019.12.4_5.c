#include <stdio.h>
struct fib
{
    int x;
    struct fib *nxt,*lst;
}*p,*q;
int main()
{
    p=malloc(sizeof(struct fib));
    p->lst=NULL,p->x=1,p->nxt=NULL;
    q=p;
    p=malloc(sizeof(struct fib));
    p->lst=q,p->x=1,p->nxt=NULL;
    q->nxt=p;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i>2)
        {
            q=p;
            p=malloc(sizeof(struct fib));
            p->x=q->x+q->lst->x;
            p->lst=q,p->nxt=NULL;
        }
        printf(" %d",p->x);
    }
}
