#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct LIE
{
    int id;
    int changdu;
    char mingcheng[20];
    char leixing[4];
    char zifu[200];
}lie[20];
void process()
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
    for(int i=1;i<=zids;i++)
    {
        lie[i].id=i;
        printf("请输入字段名称:");
        scanf("%s",lie[i].mingcheng);
        printf("请输入字段类型int n,string s");
        scanf("%c",&lie[i].leixing);
        if(lie[i].leixing!='n')
        {
            printf("请输入字段长度：");
            scanf("%d",lie[i].changdu);
        }
        else lie[i].changdu=4;
        printf("一个字段属性输入完毕!\n");
    }
    system("pause");
    system("cls");
    for(int i=1;i<=zids;i++)
    {
        printf("字段ID:%-3d,",i);
        printf("%-20s,",lie[i].mingcheng);
        printf("%-3d,%c\n",lie[i].changdu,lie[i].leixing);
    }
    system("pause");
    system("cls");
    for(int i=1;i<=tiaos;i++)
    {
        int w=0;
        for(int k=1;k<=zids;k++)
        {
            printf("%s:",lie[i].mingcheng);

            if(lie[i].leixing=='n')
                scanf("%d",(int *)(lie[i].zifu+w));
            else
                scanf("%s",lie[i].zifu+w);
            w+=lie[i].changdu;
        }
    }

    printf("读入完毕");
    system("pause");
    system("cls");
    printf("已录入信息\n");
    for(int i=1;i<=tiaos;i++)
    {
        int w=0;
        for(int k=1;k<=zids;k++)
        {
            printf("%s:",lie[i].mingcheng);
            if(lie[i].leixing=='n')
                printf("%d",*(int *)(lie[i].zifu+w));
            else
                printf("%s",lie[i].zifu+w);
            w+=lie[i].changdu;
        }
    }
    system("puase");
//    struct LIE *lie=(struct LIE *)calloc(zids,sizeof(struct LIE));
//    printf("%d",sizeof(*lie));
//    for(int i=0;i<zids;i++)
//    {
//        *(int *)(lie+i*sizeof(struct LIE))=i+1;
//        //printf("%d\n",*(int *)(lie+i*sizeof(struct LIE)));
//        printf("请输入字段名称");
//        scanf("%s",(char *)(lie+i*sizeof(struct LIE)+8));
//        printf("请输入字段类型int n,string s");
//        scanf("%c",(char *)(lie+i*sizeof(struct LIE)+28));
//        //printf("%s",*(char *)(lie+i*sizeof(struct LIE)+8));
//        if(*(char *)(lie+i*sizeof(struct LIE)+28)!='n')
//        {
//            printf("请输入字符串长度");
//            scanf("%d",(int *)(lie+i*sizeof(struct LIE)+4));
//        }
////        for(int i=0;i<sizeof(struct LIE);i++)
////        {
////            printf("%c\n",*(lie+i));
////        }
//    }

}
int main()
{
    process();
    return 0;
}
