#include <stdio.h>
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
void draw(int x,int y)
{
    system("cls");
    for(int i=1;i<=8;i++)
    {
        for(int k=1;k<=8;k++)
            if(i==x&&k==y)
                printf("£À");
            else if(map[i][k]==1)
                printf("¨€");
            else printf("  ");
        printf("\n");
    }
}
void dfs(int x,int y)
{
    //printf("%d %d\n",x,y);
    vis[x][y]=1;
    draw(x,y);
    if(x==8&&y==7)
    {
        exit(0);
    }
    if(map[x-1][y]==0&&vis[x-1][y]==0)
        dfs(x-1,y);
    if(map[x+1][y]==0&&vis[x+1][y]==0)
        dfs(x+1,y);
    if(map[x][y+1]==0&&vis[x][y+1]==0)
        dfs(x,y+1);
    if(map[x][y-1]==0&&vis[x][y-1]==0)
        dfs(x,y-1);
    draw(x,y);
}
int main()
{
    dfs(1,2);
}
