#include <stdio.h>
struct node
{
    int i;
    struct node *nxt;
}*p,*head;
int main()
{
    int n;
    scanf("%d",&n);
    struct node *q=(struct node *)calloc(n,sizeof(struct node));
    head=q;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&q[i].i);
        q[i].nxt=&q[i+1];
    }
    q[n-1].nxt=NULL;
    head=q[0].nxt;
    for(p=head;p->nxt!=NULL;p=p->nxt)
    {
        printf("%d\n",p->i);
    }
}
