#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("Please enter the coefficients a,b,c:\n");
    scanf("%f,%f,%f",&a,&b,&c);
    float dt=b*b-4*a*c;
    if(dt<0)
    {
        printf("error!\n");
        return 0;
    }
    else
    {
        printf("x1=%7.4f, x2=%7.4f\n",(-b+sqrt(dt))/(2*a),(-b-sqrt(dt))/(2*a));
    }
    return 0;
}
