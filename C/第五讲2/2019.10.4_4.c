#include  <stdio.h>
//��ʵ�ڲ�֪������������Ҹ�ʲô
int main()
{
    int sum = 0, m=1;
    while(m!=0)
    {
        printf("Input m:\n");
        scanf("%d", &m);
        sum = sum + m;
        if(m!=0)
        printf("sum = %d\n", sum);
    }
    return 0;
}
