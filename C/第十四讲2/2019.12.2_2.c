#include <stdio.h>
struct QWQ
{
    int i;
    struct QWQ *nxt;
}*head,*p,*q;
struct QWQ *flt(struct QWQ *x,struct QWQ *qaq)
{
    struct QWQ *h=qaq;
    for(;h->nxt!=x->nxt;h=h->nxt);
    return h;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct QWQ *a=(struct QWQ *)calloc(n,sizeof(struct QWQ));
    head=a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i].i);
        a[i].nxt=&a[i+1];
    }
    a[n-1].nxt=NULL;
    //printf("QAQ");
    for(p=head;p!=NULL;p=p->nxt)
    {
        //printf("QAQ\n");
        struct QWQ *lst1=flt(p,head);
        //printf("QAQ\n");
        for(q=p->nxt;q!=NULL;q=q->nxt)
        {
            //printf("QAQ\n");
            if(p->i>q->i)
            {
                struct QWQ *lst2=flt(q,head);
                struct QWQ cnt=*p;
                p->i=q->i;
                //p->nxt=q->nxt;
                q->i=cnt.i;
                //q->nxt=cnt.nxt;
                //lst2->nxt=p;
                //lst1->nxt=q;
            }
        }
    }
    for(;head!=NULL;head=head->nxt)
    {
        printf("%d\n",head->i);
    }
    return 0;
}
