#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    printf("Input n:\n");
    scanf("%d", &n);
    if(n<=2)
    {
        printf("No!\n");
        return 0;
    }
    for (i=2; i<=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("No!\n");
            return 0;
        }
    }
    printf("Yes!\n");
    return 0;
}
