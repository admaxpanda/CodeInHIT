#include <stdio.h>
int main()
{
    int a,c;
    c=scanf("%d",&a);
    if(a<0 || c!=1)
    {
        printf("Input error!\n");
        return 0;
    }
    if(a%4)
        printf("No\n");
    else
    {
        if(a%100==0)
        {
            if(a%400==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
        printf("Yes\n");
    }
}
