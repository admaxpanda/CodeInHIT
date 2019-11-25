#include <stdio.h>
int a[10],b[10];
int qiuhe(int x,int y,int z)
{
    return x*100+y*10+z;
}
int cz(int n)
{
    if(n==10)
    {
        if(qiuhe(b[1],b[2],b[3])*2==qiuhe(b[4],b[5],b[6])
           && qiuhe(b[1],b[2],b[3])*3==qiuhe(b[7],b[8],b[9]))
        {
            printf("%d,%d,%d\n",qiuhe(b[1],b[2],b[3]),qiuhe(b[4],b[5],b[6]),qiuhe(b[7],b[8],b[9]));
            return 1;
        }
        return 0;
    }
    for(int i=1;i<10;i++)
    {
        //printf("%d %d\n",n,i);
        if(!a[i])
        {
            a[i]++;
            b[n]=i;
            if(cz(n+1))return 1;
            a[i]--;
        }
    }

    return 0;
}
int main()
{
    cz(1);
}
