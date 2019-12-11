#include <stdio.h>
struct line
{
    int num;
    struct line *nxt;
}*head,*p,*q;
int main()
{
    p=malloc(sizeof(struct line));
    p->num=1,p->nxt=NULL;
    for(int i=2;i<=9;i++)
    {
        q=p;
        p=malloc(sizeof(struct line));
        p->num=i,p->nxt=q;
    }
    head=p;
    p=p->nxt;
    while(p!=NULL)
    {
        printf("%d\n",p->num);
        p=p->nxt->nxt;
    }

    return 0;

}
