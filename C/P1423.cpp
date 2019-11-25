#include <stdio.h>
int main()
{
    float a,b=2;
    scanf("%f",&a);
    int i=0;
    for(float k=0;k<a;i++)
    {
        k+=b;
        b*=0.98;
    }
    printf("%d",i);
    return 0;
}
