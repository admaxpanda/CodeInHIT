#include <stdio.h>
//2x+2y=2a;2x+4y=b
//2y=b-2a
//y=b-a/2
//x=a*3/2+b/2
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("hen=%d,rabit=%d",(int)(a-(b*0.5-a)),(int)(b*0.5-a));
    return 0;
}
