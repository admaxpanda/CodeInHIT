#include <stdio.h>
int main()
{
    printf("Input days:\n");
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=2;i<=n;i++)
    {
        a=(a+1)*2;
    }
    printf("x=%d",a);
}
