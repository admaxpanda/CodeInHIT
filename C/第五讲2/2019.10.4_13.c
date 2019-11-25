#include <stdio.h>
int main()
{
    printf("Input:\n");
    int a;
    scanf("%d",&a);
    printf("%d times:\n",a);
    float tot=0,hight=100;
    for(int i=1;i<=a;i++)
    {
        tot+=hight*1.5;
        hight/=2;
    }
    tot-=hight;
    printf("%.3f\n%.3f\n",tot,hight);
}
