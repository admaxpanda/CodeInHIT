#include <stdio.h>
int main()
{
    printf("Input distance and time:");
    float a;int b;
    scanf("%f,%d",&a,&b);
    int fee=0;
    if(a<=3)
        printf("fee = %.0f\n",8.0+b/5*2);
    else if(a<=10)
        printf("fee = %.0f\n",8.0+(a-3)*2+b/5*2);
    else
        printf("fee = %.0f\n",22.0+(a-10)*3+b/5*2);
    return 0;
}
