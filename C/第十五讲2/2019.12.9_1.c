#include <stdio.h>
int main()
{
    int a[11],sum=0;
    for(int i=1;i<=10;i++)
    {
        fscanf(stdin,"%d",&a[i]);
        sum+=a[i];
    }
    fprintf(stdout,"%d,%.1f",sum,sum/10.0);
    return 0;
}
