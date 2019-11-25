#include  <stdio.h>
//我实在不知道这道题想让我干什么
int main()
{
    int sum = 0, m=1;
    while(m!=0)
    {
        printf("Input m:\n");
        scanf("%d", &m);
        sum = sum + m;
        if(m!=0)
        printf("sum = %d\n", sum);
    }
    return 0;
}
