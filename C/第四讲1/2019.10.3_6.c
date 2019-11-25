#include <stdio.h>
int main()
{
    int a,flag=0;
    printf("Please input n:\n");
    scanf("%d",&a);
    int b=a/100,c=a%100;
    printf("%d,%d\n",b,c);
    printf("sum=%d,sub=%d,multi=%d\n",b+c,b-c,b*c);
    if(c)
        printf("dev=%.2f,",((float)b)/c);
    else
    {
        printf("The second operator is zero!");
        return 0;
    }
    printf("mod=%d\n",b%c);
    return 0;

}
