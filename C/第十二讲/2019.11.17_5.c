#include <stdio.h>
#include <math.h>
struct POINT
{
    double x;
    double y;
}a,b;
int main()
{
    scanf("%lf%lf%lf%lf",&a.x,&a.y,&b.x,&b.y);
    printf("%.2f\n",sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)));
    return 0;

}
