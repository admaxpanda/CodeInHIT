
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
    printf("Add/List/Delete/Quit\n��������ĸѡ����");
}
void ADD()
{
    char c;
    system("cls");
    printf("Line/Rectangle/Circle/Ellipse\n��������ĸѡ��Ҫ��ӵ�ͼ������,��ESC���أ�\n");
    c=getch();
    if(c=='l'||c=='L')
    {
        system("cls");
        printf("������ֱ�ߵ������˵����꣺x1,y1,x2,y2�����س�");
        k++;
        QWQ[k].a=1;
        int b=scanf("%d,%d,%d,%d",&QWQ[k].pos.a[1],&QWQ[k].pos.a[2],&QWQ[k].pos.a[3],&QWQ[k].pos.a[4]);
        if(b!=4)
        {
            while(getchar()!='\n');
            printf("����ʧ�ܣ�����������");
        }
        else
            printf("����ɹ������%d",k);
    }
    if(c=='r'||c=='R')
    {
        system("cls");
        printf("��������ε����ϽǺ����½����꣺x1,y1,x2,y2�����س�");
        k++;
        QWQ[k].a=2;
        int b=scanf("%d,%d,%d,%d",&QWQ[k].pos.a[1],&QWQ[k].pos.a[2],&QWQ[k].pos.a[3],&QWQ[k].pos.a[4]);
        if(b!=4)
        {
            while(getchar()!='\n');
            printf("����ʧ�ܣ�����������");
        }
        else
            printf("����ɹ������%d",k);
    }
    if(c=='c'||c=='C')
    {
        system("cls");
        printf("������Բ������Ͱ뾶��x1,y1,r�����س�");
        k++;
        QWQ[k].a=3;
        int b=scanf("%d,%d,%d",&QWQ[k].pos.a[1],&QWQ[k].pos.a[2],&QWQ[k].pos.a[3]);
        if(b!=4)
        {
            while(getchar()!='\n');
            printf("����ʧ�ܣ�����������");
        }
        else
            printf("����ɹ������%d",k);
    }
    if(c=='e'||c=='E')
    {
        system("cls");
        printf("��������Բ�������꣬�볤��Ͱ���᣺x,y,a,b�����س�");
        k++;
        QWQ[k].a=4;
        int b=scanf("%d,%d,%d,%d",&QWQ[k].pos.a[1],&QWQ[k].pos.a[2],&QWQ[k].pos.a[3],&QWQ[k].pos.a[4]);
        if(b!=4)
        {
            while(getchar()!='\n');
            printf("����ʧ�ܣ�����������");
        }
        else
            printf("����ɹ������%d",k);
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
            if(QWQ[k].a==1)printf("ֱ��,�˵�����Ϊx1=%d,y1=%d,x2=%d,y2=%d\n",QWQ[i].pos.a[1],QWQ[i].pos.a[2],QWQ[i].pos.a[3],QWQ[i].pos.a[4]);
            if(QWQ[k].a==2)printf("����,�˵�����Ϊx1=%d,y1=%d,x2=%d,y2=%d\n",QWQ[i].pos.a[1],QWQ[i].pos.a[2],QWQ[i].pos.a[3],QWQ[i].pos.a[4]);
            if(QWQ[k].a==3)printf("  Բ,��������Ϊx=%d,y=%d,�뾶r=\n",QWQ[i].pos.a[1],QWQ[i].pos.a[2],QWQ[i].pos.a[3]);
            if(QWQ[k].a==4)printf("��Բ,��������Ϊx=%d,y=%d,�볤��a=%d,�����b=%d\n",QWQ[i].pos.a[1],QWQ[i].pos.a[2],QWQ[i].pos.a[3],QWQ[i].pos.a[4]);
        }
    printf("\n");
    system("pause");
}
void DELETE()
{
    system("cls");
    int a;
    printf("������Ҫɾ����ͼ�ε�ID�Ż�ESC���أ�\n");
    int c=scanf("%d",&a);
    if(c!=1){while(getchar()!='\n');return;}
    if(QWQ[a].a)printf("ɾ���ɹ�!");
    else printf("���ݲ�����!");
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

