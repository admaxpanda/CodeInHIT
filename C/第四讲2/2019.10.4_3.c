#include <stdio.h>
int main()
{
    double a;int b;double c;
    printf("Input capital, year:");
    scanf("%lf,%d",&c,&b);
    char d;
    printf("Compound interest (Y/N)?");
    scanf(" %c",&d);
    switch(b)
    {
        case 1:a=0.0225;break;
        case 2:a=0.0243;break;
        case 3:a=0.0270;break;
        case 5:a=0.0288;break;
        case 8:a=0.0300;break;
        default:printf("Error year!");return 0;
    }
    if(d=='Y'||d=='y')
    {
        for(int i=1;i<=b;i++)
            c*=(1+a);
        printf("rate = %.4f, deposit = %.4f\n",a,c);
    }
    else
    {
        double x=0;
        for(int i=1;i<=b;i++)
            x+=c*a;
        printf("rate = %.4f, deposit = %.4f\n",a,x+c);
    }
}
