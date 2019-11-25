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
    int a,b,tot=0;
    printf("Input your birth year:");
    scanf("%d",&a);
    printf("Input this year:");
    scanf("%d",&b);
    for(int i=a;a<=b;a++)
    {
        if(runnian(a))
        {
            printf("%d\n",a);
            tot++;
        }
    }
    printf("count=%d\n",tot);
    return 0;
}
