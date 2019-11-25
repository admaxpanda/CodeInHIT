#include <stdio.h>
int main()
{
    printf("Input time one(hour, second):");
    int a,b;
    scanf("%d,%d",&a,&b);
    printf("Input time two(hour, second):");
    int c,d;
    scanf("%d,%d",&c,&d);
    int e=a*60+b-c*60-d;
    if(e<0)e=-e;
    printf("%d hour %d second\n",e/60,e%60);
    return 0;
}
