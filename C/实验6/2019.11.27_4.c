#include <stdio.h>
int main()
{
    float qwq;
    int bai,wushi,shi,wu,yi,wujiao,yijiao;
    scanf("%f",&qwq);
    printf("%.1fԪ=",qwq);
    if((int)(qwq/100))
    printf("%d��Ҽ��Ԫ",(int)(qwq/100));
    qwq-=(int)qwq/100*100;
    //printf("\n%f\n",qwq);
    if((int)(qwq/50))
    printf("+%d����ʰԪ",(int)(qwq/50));
    qwq-=(int)qwq/50*50;
    if((int)(qwq/10))
    printf("+%d��ҼʰԪ",(int)(qwq/10));
    qwq-=(int)qwq/10*10;
    if((int)(qwq/5))
    printf("+%d����Ԫ",(int)(qwq/5));
    qwq-=(int)qwq/5*5;
    if((int)(qwq/1))
    printf("+%d��ҼԪ",(int)(qwq/1));
    qwq-=(int)qwq/1;
    if((qwq/0.5))
    printf("+%d�����",(int)(qwq/0.5));
    qwq-=((int)(qwq/0.5))*0.5;
    if((qwq/0.1))
    printf("+%d��Ҽ��",(int)(qwq/0.1));
    printf("\n");
}
