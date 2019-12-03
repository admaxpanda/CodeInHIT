#include <stdio.h>
struct QWQ
{
    int num,a,b,c,sum;
    double average;
}quq[4];
int main()
{
    for(int i=1;i<=3;i++)
    {
        scanf("%d%d%d%d",&quq[i].num,&quq[i].a,&quq[i].b,&quq[i].c);
        quq[i].sum=quq[i].a+quq[i].b+quq[i].c;
        quq[i].average=quq[i].sum/3.0;
    }
    for(int i=1;i<=3;i++)
        for(int k=i+1;k<=3;k++)
            if(quq[i].sum<quq[k].num)
            {
                struct QWQ QUQ;
                QUQ=quq[i];
                quq[i]=quq[k];
                quq[k]=QUQ;
            }
    for(int i=1;i<=3;i++)
        printf("%d,%d,%d,%d,%d,%.2f\n",quq[i].num,quq[i].a,quq[i].b,quq[i].c,quq[i].sum,quq[i].average);
    return 0;
}
