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
    printf("�밴�������е���ĸѡ���ܣ�\n");
    printf("[C]reate a table,[L]ist a table exist,[Q]uit\n");
    char c;
    scanf("%c",&c);
    if(c=='Q'||c=='q')return 0;
    else if(c=='L'||c=='l')
    {
        printf("�����뱣����ļ�����:(������׺��)\n");
        char chh[20];
        scanf("%s",chh);
        FILE *in=fopen(chh,"r");
        int zids,//�ֶ���ZI Duan Shu
            tiaos;//����TIAO Shu
        fscanf(in,"%d",&zids);
        fscanf(in,"%d",&tiaos);
        printf("�ֶ�����%d ������%d\n",zids,tiaos);
        struct LIE *lie=(struct LIE *)malloc(zids*sizeof(struct LIE));
        for(int i=0;i<zids;i++)
        {
            lie[i].id=i+1;
            //printf("�������ֶ�����:");
            fscanf(in,"%s",lie[i].mingcheng);
            //printf("�������ֶ�����int n,string s");
            fscanf(in," %c",&lie[i].leixing);
            //printf("�������ֶγ��ȣ�");
            fscanf(in,"%d",&lie[i].changdu);
            //printf("һ���ֶ������������!\n");
        }
        for(int i=0;i<zids;i++)
        {
            printf("�ֶ�ID:%-3d,",i+1);
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
        printf("�����뱣���ļ�����:(������׺��)\n");
        char chh[20];
        scanf("%s",chh);
        int zids,//�ֶ���ZI Duan Shu
        tiaos;//����TIAO Shu
        int a;
        FILE *out=fopen(chh,"w");
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
        fprintf(out,"%d %d\n",zids,tiaos);
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
                lie[i].changdu++;
            }
            else lie[i].changdu=4;
            printf("һ���ֶ������������!\n");
            fprintf(out,"%s %c %d\n",lie[i].mingcheng,lie[i].leixing,lie[i].changdu);
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
        free(lie);
        free(w);
        return 0;
    }
    printf("ֻ������C,L,Q�е�һ��");
    return 0;
}
