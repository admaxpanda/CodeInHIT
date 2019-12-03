#include <stdio.h>
#include <stdlib.h>
int inqueue[9][9];
int map[9][9]=
{
{0,1,1,1,1,1,1,1,1},
{0,1,0,1,1,1,1,1,1},
{0,1,0,0,1,0,0,0,1},
{0,1,1,0,0,0,1,1,1},
{0,1,0,0,1,0,0,0,1},
{0,1,1,1,1,0,1,1,1},
{0,1,0,0,0,0,0,0,1},
{0,1,0,1,0,1,0,0,1},
{0,1,1,1,1,1,1,0,1},
};
struct pos
{
    int x,y;
    struct pos *nxt;
};
void draw(struct pos p)
{
    system("cls");
    for(int i=1;i<=8;i++)
    {
        for(int k=1;k<=8;k++)
            if(i==p.x&&k==p.y)
                printf("＠");
            else if(map[i][k]==1)
                printf("█");
            else printf("  ");
        printf("\n");
    }

}
int main()
{
    //BFS
    struct pos *queue=(struct pos *)malloc(sizeof(struct pos));
    struct pos *q2=NULL;
    queue->x=1,queue->y=2,queue->nxt=NULL;
    struct pos *p=queue;
    struct pos *fre=p;
    while(p!=NULL)
    {
        inqueue[p->x][p->y]=0;
        draw(*p);
        if(p->x==8&&p->y==7)
            break;
        if(map[p->x+1][p->y]==0)
        {
            if(inqueue[p->x+1][p->y]==0)
            {
                q2=(struct pos*)malloc(sizeof(struct pos));
                q2->x=p->x+1,q2->y=p->y,q2->nxt=NULL;
                queue->nxt=q2;
                queue=q2;
                q2=NULL;
                inqueue[p->x+1][p->y]=1;
            }

        }
        if(map[p->x-1][p->y]==0)
        {
            if(inqueue[p->x-1][p->y]==0)
            {
                q2=(struct pos*)malloc(sizeof(struct pos));
                q2->x=p->x-1,q2->y=p->y,q2->nxt=NULL;
                queue->nxt=q2;
                queue=q2;
                q2=NULL;
                inqueue[p->x-1][p->y]=1;
            }

        }
        if(map[p->x][p->y+1]==0)
        {
            if(inqueue[p->x][p->y+1]==0)
            {
                q2=(struct pos*)malloc(sizeof(struct pos));
                q2->x=p->x,q2->y=p->y+1,q2->nxt=NULL;
                queue->nxt=q2;
                queue=q2;
                q2=NULL;
                inqueue[p->x][p->y+1]=1;
            }

        }
        if(map[p->x][p->y-1]==0)
        {
            if(inqueue[p->x][p->y-1]==0)
            {
                q2=(struct pos*)malloc(sizeof(struct pos));
                q2->x=p->x,q2->y=p->y-1,q2->nxt=NULL;
                queue->nxt=q2;
                queue=q2;
                q2=NULL;
                inqueue[p->x][p->y-1]=1;
            }

        }
        p=p->nxt;
        free(fre);
        fre=p;
    }
}
