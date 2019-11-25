#include <stdio.h>
int main()
{
    int maxn,minn,n,a;
    printf("Please enter min,max:\n");
    scanf("%d,%d",&minn,&maxn);
    while(1)
    {
        printf("Please enter an integer [%d..%d]:\n",minn,maxn);
        a=scanf("%d",&n);
        if(a==1&&n>=minn&&n<=maxn)
            break;
    }
    printf("The integer you have entered is:%d\n",n);
    return 0;
}
