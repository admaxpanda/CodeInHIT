#include <stdio.h>
int runnian(int a)
{
    if(a%4)
        return 0;
    else
    {
        if(a%100==0)
        {
            if(a%400==0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
}
int main()
{
    int a,b;
    //没想到竟然爆longlong……
    unsigned int tot;
    printf("Input your birth year:");
    scanf("%d",&a);
    printf("Input this year:");
    scanf("%d",&b);
    for(int i=a;i<b;i++)
    {
        if(runnian(i))
        {
            tot+=366*24*60*75;
        }
        else
            tot+=365*24*60*75;
    }
    printf("The heart beats in your life: %lu",tot);
    return 0;
}
