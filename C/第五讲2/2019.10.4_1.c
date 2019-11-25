#include <stdio.h>
int pow_10(int x)
{
    int a=1;
    for(int i=1;i<=x;i++)
        a*=10;
    return a;
}
int main()
{
    printf("Please enter the number:\n");
    int a;
    scanf("%d",&a);
    int tot=0,c=a;
    for(;c!=0;c/=10)
        tot++;
    printf("%d: %d bits\n",a,tot);
    if(a<0)a=-a;
    int b[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=1;i<=tot;i++)
    {
        int c=(a-a/pow_10(i)*pow_10(i)-a%pow_10(i-1))/pow_10(i-1);
        b[c]++;
    }
    for(int i=0;i<=9;i++)
        if(b[i])
            printf("%d: %d\n",i,b[i]);
    return 0;
}
