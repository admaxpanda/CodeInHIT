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

int main()
{
    printf("请按方括号中的字母选择功能：\n");
    printf("[C]reate a table,[L]ist a table exist,[Q]uit\n");
    char c;
    scanf("%c",&c);
    if(c=='Q'||c=='q')return 0;
    else if(c=='L'||c=='l')
    {
        printf("请输入保存的文件名称:(包含后缀名)\n");
        char chh[20];
        scanf("%s",chh);
        FILE *in=fopen(chh,"r");
        int zids,//字段数ZI Duan Shu
            tiaos;//条数TIAO Shu
        fscanf(in,"%d",&zids);
        fscanf(in,"%d",&tiaos);
        printf("字段数：%d 条数：%d\n",zids,tiaos);
        struct LIE *lie=(struct LIE *)malloc(zids*sizeof(struct LIE));
        for(int i=0;i<zids;i++)
        {
            lie[i].id=i+1;
            //printf("请输入字段名称:");
            fscanf(in,"%s",lie[i].mingcheng);
            //printf("请输入字段类型int n,string s");
            fscanf(in," %c",&lie[i].leixing);
            //printf("请输入字段长度：");
            fscanf(in,"%d",&lie[i].changdu);
            //printf("一个字段属性输入完毕!\n");
        }
        for(int i=0;i<zids;i++)
        {
            printf("字段ID:%-3d,",i+1);
            printf("%-20s,",lie[i].mingcheng);
            printf("%-3d,%c\n",lie[i].changdu,lie[i].leixing);
        }
        int *w=calloc(zids,sizeof(int));
        for(int i=0;i<tiaos;i++)
        {
            for(int k=0;k<zids;k++)
            {
                //printf("%s:",lie[k].mingcheng);
                if(lie[k].leixing=='n')
                    fscanf(in,"%d",(int *)(lie[k].zifu+w[k]));
                else
                    fscanf(in,"%s",lie[k].zifu+w[k]);
                w[k]+=lie[k].changdu;
            }
        }
        for(int i=0;i<zids;i++)
            w[i]=0;
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
        free(lie);
        free(w);
        return 0;
    }
    else if(c=='C'||c=='c')
    {
        printf("请输入保存文件名称:(包含后缀名)\n");
        char chh[20];
        scanf("%s",chh);
        int zids,//字段数ZI Duan Shu
        tiaos;//条数TIAO Shu
        int a;
        FILE *out=fopen(chh,"w");
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
        fprintf(out,"%d %d\n",zids,tiaos);
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
                lie[i].changdu++;
            }
            else lie[i].changdu=4;
            printf("一个字段属性输入完毕!\n");
            fprintf(out,"%s %c %d\n",lie[i].mingcheng,lie[i].leixing,lie[i].changdu);
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
                {
                    scanf("%d",(int *)(lie[k].zifu+w[k]));
                    fprintf(out,"%d ",*(int *)(lie[k].zifu+w[k]));
                }
                else
                {
                    scanf("%s",lie[k].zifu+w[k]);
                    fprintf(out,"%s ",lie[k].zifu+w[k]);
                }
                w[k]+=lie[k].changdu;
            }
            fprintf(out,"\n");
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
        free(lie);
        free(w);
        return 0;
    }
    printf("只能输入C,L,Q中的一个");
    return 0;
}
