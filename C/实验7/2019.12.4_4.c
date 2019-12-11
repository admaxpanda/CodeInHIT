#include <stdio.h>
struct line
{
    int num;
    struct line *nxt,*lst;
}*head,*p,*q;
int main()
{
    p=malloc(sizeof(struct line));
    p->num=1,p->nxt=NULL,p->lst=NULL;
    head=p;
    for(int i=2;i<=27;i++)
    {
        q=p;
        p=malloc(sizeof(struct line));
        p->num=i,p->nxt=head,p->lst=q;
        q->nxt=p;
    }
    head->lst=p;
    p=p->nxt->nxt->nxt;

//    while(p->nxt!=head)
//    {
//        printf("%d ",p->num);
//        p=p->nxt;
//    }
    while(p->nxt!=p)
    {
        q=p;
        //printf("%d\n",q->num);
        p=p->nxt->nxt->nxt;
        q->lst->nxt=q->nxt;
        q->nxt->lst=q->lst;
        free(q);
    }
    printf("最后在圈中的人的序号为：%d\n",p->num);
    return 0;

}
