#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
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
    int x,y,du;
    struct pos *nxt,*lst;
}*stack,*p,*top,*q,*cnt,*fre,*cnt;
void draw(struct pos p)
{
    Sleep(200);//防止移动过快看不见
    system("cls");
    for(int i=1;i<=8;i++)
    {
        for(int k=1;k<=8;k++)
            if(i==p.x&&k==p.y)
                printf("##");
            else if(map[i][k]==1)
                printf("00");
            else printf("  ");
        printf("\n");
    }
    //system("pause");
}
void find(int x,int y)
{
    if(map[x][y]==0&&vis[x][y]==0)
    {
        p->du++;
        stack=(struct pos *)malloc(sizeof(struct pos));
        stack->nxt=top,stack->lst=p;
        stack->x=x,stack->y=y,stack->du=0;
        vis[x][y]=1;
        top=stack;
    }
}
int main()
{
    stack=(struct pos *)malloc(sizeof(struct pos));
    q=p=top=stack;
    p->nxt=NULL;
    p->lst=NULL;
    p->x=1,p->y=2,p->du=0;
    //这是一个栈的写法
    //stack用来申请空间
    //top指向栈的顶层
    //p指向当前搜索的点
    //搜索到可以进入的点就加入栈中，并记录该点的出度
    //每个点搜索后，上一个点出度-1
    //当一个点搜索完成后，检查其出度，若为0，则尽心回溯
    //回溯至上一个出度不为0的点（这个在栈中关系是对应的）
    //删除掉路径中出度已经为0的点
    while(p!=NULL)
    {
        draw(*p);
        if(p->x==8&&p->y==7)
            break;
        find(p->x-1,p->y);
        find(p->x,p->y+1);
        find(p->x,p->y-1);
        find(p->x+1,p->y);
        if(p->lst!=NULL)
        {
            p->lst->du--;
            q=p;
            if(p->du==0)
            {
                while(q->du==0)
                {
                    if(q!=top)
                    {
                        fre=top;
                        while(fre->nxt!=q)fre=fre->nxt;
                        fre->nxt=q->nxt;
                        fre=q;
                        q=q->lst;
                        free(fre);
                    }
                    else
                    {
                        cnt=q;
                        top=q->nxt;
                        q=q->lst;
                        free(cnt);
                    }
                    draw(*q);
                }
            }
        }
        p=top;
    }
}
