#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Input a/b, c/d:");
    scanf("%d/%d,%d/%d",&a,&b,&c,&d);
    if(1.0*a/b>1.0*c/d)
        printf("%d/%d>%d/%d\n",a,b,c,d);
    else if(1.0*a/b==1.0*c/d)
        printf("%d/%d=%d/%d\n",a,b,c,d);
    else
        printf("%d/%d<%d/%d\n",a,b,c,d);
}
