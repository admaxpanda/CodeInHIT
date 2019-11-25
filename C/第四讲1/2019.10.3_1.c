#include <stdio.h>
int main()
{
    int a,b;
    int c=scanf("%d%d",&a,&b);
    if(c==2)
    {
        printf("a = %d, b = %d\n",a,b);
    }
    else
        printf("Input error!");
    return 0;
}
