#include <stdio.h>
int main()
{
    float qwq;
    int bai,wushi,shi,wu,yi,wujiao,yijiao;
    scanf("%f",&qwq);
    printf("%.1f元=",qwq);
    printf("%d张壹佰元",(int)qwq/100);
    qwq-=qwq/100*100;
    printf("%d张伍拾元",(int)qwq/50);
    qwq-=qwq/50*50;
    printf("%d张壹拾元",qwq/10);
    qwq-=qwq/10*10;
    printf("%d张伍元",qwq/5);
    qwq-=qwq/5*5;
    printf("%d张壹元",qwq/1);
    qwq-=qwq/1;
    printf("%d张伍角",qwq/0.5);
    qwq-=qwq/0.5*0.5;
    printf("%d张壹角",qwq/0.1);
    printf("\n");
}
