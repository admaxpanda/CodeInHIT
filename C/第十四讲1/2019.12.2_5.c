#include <stdio.h>
#include <math.h>
double qiuhe(int x)
{
    double ans=0;
    for(int i=x;i<=x+x;i++)
        ans+=sqrt(i);
    return ans;
}
int main()
{
    printf("Input n:\n");
    double n;
    scanf("%lf",&n);
    //printf("%f",n);
    double ans=0;
    for(int i=1;;i++)
    {
        ans=qiuhe(i);
        if(ans>=n)
        {
            printf("Result:m>=%d\n",i);
            printf("s=%.2f\n",ans);
            return 0;
        }
    }

}
