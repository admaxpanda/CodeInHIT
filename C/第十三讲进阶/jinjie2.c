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
    int zids,//�ֶ���ZI Duan Shu
        tiaos;//����TIAO Shu
    int a;
    printf("�������¼���ֶ�����");
    a=scanf("%d",&zids);
    if(a!=1)
    {
        while(1)
        {
            while(getchar()!='\n');
            printf("�����������������\n");
            a=scanf("%d",&zids);
            if(a==1)break;
        }
    }
    printf("�������¼����");
    a=scanf("%d",&tiaos);
    if(a!=1)
    {
        while(1)
        {
            while(getchar()!='\n');
            printf("�����������������\n");
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
        printf("�������ֶ�����:");
        scanf("%s",lie[i].mingcheng);
        printf("�������ֶ�����int n,string s");
        scanf(" %c",&lie[i].leixing);
        if(lie[i].leixing!='n')
        {
            printf("�������ֶγ��ȣ�");
            scanf("%d",&lie[i].changdu);
        }
        else lie[i].changdu=4;
        printf("һ���ֶ������������!\n");
    }
    system("pause");
    system("cls");
    for(int i=0;i<zids;i++)
    {
        printf("�ֶ�ID:%-3d,",i+1);
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
    printf("�������");
    system("pause");
    system("cls");
    printf("��¼����Ϣ\n");
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
