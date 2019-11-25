#include <stdio.h>
int pow_10(int x)
{
    int a=1;
    for(int i=1;i<=x;i++)
        a*=10;
    return a;
}
int qwq(int si,int liu)
{
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=1;i<=4;i++)
    {
        int c=(si-si/pow_10(i)*pow_10(i)-si%pow_10(i-1))/pow_10(i-1);
        if(a[c])
            return 0;
        else
            a[c]++;
    }
    for(int i=1;i<=4;i++)
    {
        int c=(liu-liu/pow_10(i)*pow_10(i)-liu%pow_10(i-1))/pow_10(i-1);
        if(a[c])
            return 0;
        else
            a[c]++;
    }
}
int main()
{
    for(int i=1;i<=30;i++)
    {
        //printf("%d\n",i);
        if(i*i*i>=1000&&i*i*i<10000)
        {

            if(i*i*i*i>=100000&&i*i*i*i<1000000)
            {
                if(qwq(i*i*i,i*i*i*i))
                {
//                    printf("%d\n",i);
                    printf("age=%d\n",i);
                    return 0;
                }
            }
        }
    }
//    printf("age=18");
    return 0;
}
