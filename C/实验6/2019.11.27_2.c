#include <stdio.h>
struct date
{
    int year,month,day;
}a;
int main()
{
    int tot=0;
    printf("Please enter date(yyyy mm dd):");
    scanf("%d%d%d",&a.year,&a.month,&a.day);
    for(int i=1;i<a.month;i++)
    {
        if(i==2)
        {
            if(a.year%4==0&&a.year%100!=0||a.year%400==0)
                tot+=29;
            else
                tot+=28;
        }
        else if(i==4||i==6||i==9||i==11)
            tot+=30;
        else
            tot+=31;
    }
    tot+=a.day;
    printf("The date is No.%d  days!\n",tot);
}
