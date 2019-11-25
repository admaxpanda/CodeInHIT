#include <stdio.h>
int main()
{
    double a;
    int b;
    double c;
    printf("Please enter rate, year, capital:\n");
    scanf("%lf,%d,%lf",&a,&b,&c);
    for(int i=1;i<=b;i++)
        c*=1+a;
    printf("deposit=%.3f\n",c);
}
