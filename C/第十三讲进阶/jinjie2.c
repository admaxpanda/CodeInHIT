#include <stdio.h>
#include <stdlib.h>
struct LIE
{
    int id;
    int changdu;
    char mingcheng[20];
    char leixing;
    char zifu[200];
};
void QAQ()
{
    int zids,//字段数ZI Duan Shu
        tiaos;//条数TIAO Shu
    int a;
    printf("请输入记录的字段数：");
    a=scanf("%d",&zids);
    if(a!=1)
    {
        while(1)
        {
            while(getchar()!='\n');
            printf("输入错误，请重新输入\n");
            a=scanf("%d",&zids);
            if(a==1)break;
        }
    }
    printf("请输入记录条数");
    a=scanf("%d",&tiaos);
    if(a!=1)
    {
        while(1)
        {
            while(getchar()!='\n');
            printf("输入错误，请重新输入\n");
            a=scanf("%d",&zids);
            if(a==1)break;
        }
    }
    system("cls");
    struct LIE *lie=(struct LIE *)malloc(zids*sizeof(struct LIE));
    system("cls");
    for(int i=0;i<zids;i++)
    {
        lie[i].id=i+1;
        printf("请输入字段名称:");
        scanf("%s",lie[i].mingcheng);
        printf("请输入字段类型int n,string s");
        scanf(" %c",&lie[i].leixing);
        if(lie[i].leixing!='n')
        {
            printf("请输入字段长度：");
            scanf("%d",&lie[i].changdu);
        }
        else lie[i].changdu=4;
        printf("一个字段属性输入完毕!\n");
    }
    system("pause");
    system("cls");
    for(int i=0;i<zids;i++)
    {
        printf("字段ID:%-3d,",i+1);
        printf("%-20s,",lie[i].mingcheng);
        printf("%-3d,%c\n",lie[i].changdu,lie[i].leixing);
    }
    system("pause");
    system("cls");
    int *w=calloc(zids,sizeof(int));
    for(int i=0;i<tiaos;i++)
    {
        for(int k=0;k<zids;k++)
        {
            printf("%s:",lie[k].mingcheng);

            if(lie[k].leixing=='n')
                scanf("%d",(int *)(lie[k].zifu+w[k]));
            else
                scanf("%s",lie[k].zifu+w[k]);
            w[k]+=lie[k].changdu;
        }
    }
    for(int i=0;i<zids;i++)
        w[i]=0;
    printf("读入完毕");
    system("pause");
    system("cls");
    printf("已录入信息\n");
    for(int i=0;i<tiaos;i++)
    {
        for(int k=0;k<zids;k++)
        {
            printf("%s:",lie[k].mingcheng);
            if(lie[k].leixing=='n')
                printf("%-10d",*(int *)(lie[k].zifu+w[k]));
            else
                printf("%-20s",lie[k].zifu+w[k]);
            w[k]+=lie[k].changdu;
        }
        printf("\n");
    }
    system("pause");
}
int main()
{
    QAQ();
    return 0;
}
