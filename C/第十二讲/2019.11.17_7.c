#include <stdio.h>
struct FRACTION
{
     int num; //����
     int demo;//��ĸ
};
struct COMP
{
       int real;  //ʵ��
       int imag;  //�鲿
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
    int nType; //���ͱ�ʶ��1��˫��������2��������3����������������Ч
} myNum;
int main()
{
    scanf("%d",&myNum.nType);
    switch(myNum.nType)
    {
        case 1: scanf("%lf",&myNum.num.realNum);
                printf("����һ��˫����������һ��˫��������%.2f\n",myNum.num.realNum);
                break;
        case 2: scanf("%d%d",&myNum.num.frct.num,&myNum.num.frct.demo);
                printf("������Ӻͷ�ĸ����һ��������%d/%d\n",myNum.num.frct.num,myNum.num.frct.demo);
                break;
        case 3: scanf("%d%d",&myNum.num.comp.real,&myNum.num.comp.imag);
                printf("����ʵ�����鲿����һ��������%d+%di\n",myNum.num.comp.real,myNum.num.comp.imag);
                break;
    }
    return 0;
}
