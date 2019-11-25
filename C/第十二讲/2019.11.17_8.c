#include <stdio.h>
enum weekday
{
    Mon=1,Tues=2,Wed=3,Thur=4,Fri=5,Sat=6,Sun=7
}day;
int main()
{
    scanf("%d",&day);
    //printf("%d",day);
    switch(day)
    {
        case Mon:printf("今天是星期一\n");break;
        case Tues:printf("今天是星期二\n");break;
        case Wed:printf("今天是星期三\n");break;
        case Thur:printf("今天是星期四\n");break;
        case Fri:printf("今天是星期五\n");break;
        case Sat:printf("今天是星期六\n");break;
        case Sun:printf("今天是星期日\n");break;
        default:printf("输入错误！\n");
    }
    return 0;
}
