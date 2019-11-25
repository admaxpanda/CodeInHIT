#include <stdio.h>
int main()
{
    double a;int b;double c;
    printf("Input rate, year, capital:");
    scanf("%lf,%d,%lf",&a,&b,&c);
    char d;
    printf("Compound interest (Y/N)?");
    scanf(" %c",&d);
    if(d=='Y'||d=='y')
    {
        for(int i=1;i<=b;i++)
            c*=(1+a);
        printf("deposit = %.4f\n",c);
    }
    else
    {
        double x=0;
        for(int i=1;i<=b;i++)
            x+=c*a;
        printf("deposit = %.4f\n",x+c);
    }
}
