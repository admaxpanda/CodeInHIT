#include <stdio.h>
#include <math.h>
int main()
{
    double a=2,b=3,c=1;
    double det=sqrt(b*b-4*a*c);
    printf("x1=%.4f\n",(-b+det)/(2*a));
    printf("x2=%.4f\n",(-b-det)/(2*a));
    return 0;
}
