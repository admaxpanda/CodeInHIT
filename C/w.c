
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
union graph
{
   int  a[5];
};
struct qwq
{
    union graph pos;
    int a;
}QWQ[200];
int k=-1;
void jiemian()
{
    system("cls");
    printf("Add/List/Delete/Quit\n输入首字母选择功能");
}
void ADD()
{
    char c;
    system("cls");
    printf("Line/Rectangle/Circle/Ellipse\n输入首字母选择要添加的图形种类,按ESC返回：\n");
    c=getch();
    if(c=='l'||c=='L')
    {
        system("cls");
        printf("请输入直线的两个端点坐标：x1,y1,x2,y2并按回车");
        k++;
        QWQ[k].a=1;
        int b=scanf("%d,%d,%d,%d",&QWQ[k].pos.a[1],&QWQ[k].pos.a[2],&QWQ[k].pos.a[3],&QWQ[k].pos.a[4]);
        if(b!=4)
        {
            while(getchar()!='\n');
            printf("输入失败，请重新输入");
        }
        else
            printf("输入成功，编号%d",k);
    }
    if(c=='r'||c=='R')
    {
        system("cls");
        printf("请输入矩形的左上角和右下角坐标：x1,y1,x2,y2并按回车");
        k++;
        QWQ[k].a=2;
        int b=scanf("%d,%d,%d,%d",&QWQ[k].pos.a[1],&QWQ[k].pos.a[2],&QWQ[k].pos.a[3],&QWQ[k].pos.a[4]);
        if(b!=4)
        {
            while(getchar()!='\n');
            printf("输入失败，请重新输入");
        }
        else
            printf("输入成功，编号%d",k);
    }
    if(c=='c'||c=='C')
    {
        system("cls");
        printf("请输入圆心坐标和半径：x1,y1,r并按回车");
        k++;
        QWQ[k].a=3;
        int b=scanf("%d,%d,%d",&QWQ[k].pos.a[1],&QWQ[k].pos.a[2],&QWQ[k].pos.a[3]);
        if(b!=4)
        {
            while(getchar()!='\n');
            printf("输入失败，请重新输入");
        }
        else
            printf("输入成功，编号%d",k);
    }
    if(c=='e'||c=='E')
    {
        system("cls");
        printf("请输入椭圆中心坐标，半长轴和半短轴：x,y,a,b并按回车");
        k++;
        QWQ[k].a=4;
        int b=scanf("%d,%d,%d,%d",&QWQ[k].pos.a[1],&QWQ[k].pos.a[2],&QWQ[k].pos.a[3],&QWQ[k].pos.a[4]);
        if(b!=4)
        {
            while(getchar()!='\n');
            printf("输入失败，请重新输入");
        }
        else
            printf("输入成功，编号%d",k);
    }
    system("pause");
    return;
}
void LIST()
{
    system("cls");
    for(int i=0;i<=k;i++)
        if(QWQ[k].a)
        {
            printf("ID:%d",i);
            if(QWQ[k].a==1)printf("直线,端点坐标为x1=%d,y1=%d,x2=%d,y2=%d\n",QWQ[i].pos.a[1],QWQ[i].pos.a[2],QWQ[i].pos.a[3],QWQ[i].pos.a[4]);
            if(QWQ[k].a==2)printf("矩形,端点坐标为x1=%d,y1=%d,x2=%d,y2=%d\n",QWQ[i].pos.a[1],QWQ[i].pos.a[2],QWQ[i].pos.a[3],QWQ[i].pos.a[4]);
            if(QWQ[k].a==3)printf("  圆,中心坐标为x=%d,y=%d,半径r=\n",QWQ[i].pos.a[1],QWQ[i].pos.a[2],QWQ[i].pos.a[3]);
            if(QWQ[k].a==4)printf("椭圆,中心坐标为x=%d,y=%d,半长轴a=%d,半短轴b=%d\n",QWQ[i].pos.a[1],QWQ[i].pos.a[2],QWQ[i].pos.a[3],QWQ[i].pos.a[4]);
        }
    printf("\n");
    system("pause");
}
void DELETE()
{
    system("cls");
    int a;
    printf("请输入要删除的图形的ID号或按ESC返回：\n");
    int c=scanf("%d",&a);
    if(c!=1){while(getchar()!='\n');return;}
    if(QWQ[a].a)printf("删除成功!");
    else printf("数据不存在!");
    QWQ[a].a=0;
    system("pause");
}
int main()
{
    //for(int i=0;i<200;i++)QWQ[i]=i;
    jiemian();
    char c;
    int psn=0;
    while(1)
    {
        if(psn==0)
        {
            system("cls");
            jiemian();
            c=getch();
            if(c=='a'||c=='A')
                psn=1;
            if(c=='l'||c=='L')
                psn=2;
            if(c=='d'||c=='D')
                psn=3;
            if(c=='q'||c=='Q')
                return 0;
        }
        if(psn==1)
            ADD();
        if(psn==2)
            LIST();
        if(psn==3)
            DELETE();
        psn=0;
    }
}

