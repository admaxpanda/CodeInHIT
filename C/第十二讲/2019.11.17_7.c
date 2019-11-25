#include <stdio.h>
struct FRACTION
{
     int num; //分子
     int demo;//分母
};
struct COMP
{
       int real;  //实部
       int imag;  //虚部
};
union NUM
{
    double realNum;
    struct FRACTION frct;
    struct COMP comp;
};
struct
{
    union NUM num;
    int nType; //类型标识：1：双精度数、2：分数、3：虚数，其它数无效
} myNum;
int main()
{
    scanf("%d",&myNum.nType);
    switch(myNum.nType)
    {
        case 1: scanf("%lf",&myNum.num.realNum);
                printf("输入一个双精度数：是一个双精度数：%.2f\n",myNum.num.realNum);
                break;
        case 2: scanf("%d%d",&myNum.num.frct.num,&myNum.num.frct.demo);
                printf("输入分子和分母：是一个分数：%d/%d\n",myNum.num.frct.num,myNum.num.frct.demo);
                break;
        case 3: scanf("%d%d",&myNum.num.comp.real,&myNum.num.comp.imag);
                printf("输入实部和虚部：是一个虚数：%d+%di\n",myNum.num.comp.real,myNum.num.comp.imag);
                break;
    }
    return 0;
}
