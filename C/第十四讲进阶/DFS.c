#include <stdio.h>
#include <stdlib.h>
int vis[9][9];
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
    struct pos *nxt,*lst;
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
    //DFS
    //这是一个手写栈的写法……
    //实际上，应该是用递归更简单一点……
    struct pos *stack=(struct pos *)malloc(sizeof(struct pos));
    struct pos *top,*bottom,*p,*fre;
    p=top=bottom=stack;
    stack->lst=NULL;
    stack->nxt=NULL;
    stack->x=1,stack->y=2;
    while(p!=NULL)
    {
        int qaq=0;
        draw(*p);
        if(p->x==8&&p->y==7)
            break;
        if(map[p->x+1][p->y]==0)
        {
            if(vis[p->x+1][p->y]==0)
            {
                stack=(struct pos *)malloc(sizeof(struct pos));
                top->nxt=stack;
                stack->lst=top,stack->nxt=NULL;
                stack->x=p->x+1,stack->y=p->y;
                top=stack;
                vis[p->x+1][p->y]=1;
                qaq++;
            }
        }
        if(map[p->x-1][p->y]==0)
        {
            if(vis[p->x-1][p->y]==0)
            {
                stack=(struct pos *)malloc(sizeof(struct pos));
                top->nxt=stack;
                stack->lst=top,stack->nxt=NULL;
                stack->x=p->x-1,stack->y=p->y;
                top=stack;
                vis[p->x-1][p->y]=1;
                qaq++;
            }
        }
        if(map[p->x][p->y+1]==0)
        {
            if(vis[p->x][p->y+1]==0)
            {
                stack=(struct pos *)malloc(sizeof(struct pos));
                top->nxt=stack;
                stack->lst=top,stack->nxt=NULL;
                stack->x=p->x,stack->y=p->y+1;
                top=stack;
                vis[p->x][p->y+1]=1;
                qaq++;
            }
        }
        if(map[p->x][p->y-1]==0)
        {
            if(vis[p->x][p->y-1]==0)
            {
                stack=(struct pos *)malloc(sizeof(struct pos));
                top->nxt=stack;
                stack->lst=top,stack->nxt=NULL;
                stack->x=p->x,stack->y=p->y-1;
                top=stack;
                vis[p->x][p->y-1]=1;
                qaq++;
            }
        }
        if(!qaq)draw(*(p->lst));
        p=top;
        free(fre);
        fre=p;
        top=top->lst;
    }
}
