#include <stdio.h>
int main()
{
    printf("Input year,month:\n");
    int a,b;
    scanf("%d,%d",&a,&b);
    if(b<1||b>12)
    {
        printf("Input error!\n");
        return 0;
    }
    if(b==2)
    {
        if(a%4==0&&a%100||a%400==0)
            printf("29 days\n");
        else
            printf("28 days\n");
    }
    else
    {
        if(b==1||b==3||b==5||b==7||b==8||b==10||b==12)
            printf("31 days\n");
        else
            printf("30 days\n");
    }
    return 0;
}
