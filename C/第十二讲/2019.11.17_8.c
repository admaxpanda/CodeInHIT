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
        case Mon:printf("����������һ\n");break;
        case Tues:printf("���������ڶ�\n");break;
        case Wed:printf("������������\n");break;
        case Thur:printf("������������\n");break;
        case Fri:printf("������������\n");break;
        case Sat:printf("������������\n");break;
        case Sun:printf("������������\n");break;
        default:printf("�������\n");
    }
    return 0;
}
