#include <stdio.h>
int main()
{
    printf("Input two FENSHU:\n");
    float a,b,c,d;
    scanf("%f/%f,%f/%f",&a,&b,&c,&d);
    if(a/b>c/d)printf("%d/%d>%d/%d\n",(int)a,(int)b,(int)c,(int)d);
    else if(a/b==c/d)printf("%d/%d=%d/%d\n",(int)a,(int)b,(int)c,(int)d);
    else printf("%d/%d<%d/%d\n",(int)a,(int)b,(int)c,(int)d);
    return 0;
}
