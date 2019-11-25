#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int tot=0;
    int c=n;
    for(;n!=0;n/=10)
        tot++;
    printf("Please enter the number:\n%d: %d bits\n",c,tot);
    return 0;
}
