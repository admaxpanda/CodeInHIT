#include <stdio.h>
int main()
{
    float qwq;
    int bai,wushi,shi,wu,yi,wujiao,yijiao;
    scanf("%f",&qwq);
    printf("%.1fԪ=",qwq);
    printf("%d��Ҽ��Ԫ",(int)qwq/100);
    qwq-=qwq/100*100;
    printf("%d����ʰԪ",(int)qwq/50);
    qwq-=qwq/50*50;
    printf("%d��ҼʰԪ",qwq/10);
    qwq-=qwq/10*10;
    printf("%d����Ԫ",qwq/5);
    qwq-=qwq/5*5;
    printf("%d��ҼԪ",qwq/1);
    qwq-=qwq/1;
    printf("%d�����",qwq/0.5);
    qwq-=qwq/0.5*0.5;
    printf("%d��Ҽ��",qwq/0.1);
    printf("\n");
}
