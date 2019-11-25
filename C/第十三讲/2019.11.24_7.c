#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *a=calloc(n,sizeof(int));
    scanf("%d",a+n-1);
    printf("%d",*(a+n-1));
    return 0;
}
