#include <stdio.h>
int main()
{
    int *a=NULL;
    a=malloc(18);
    char *c=a+4;
    float *f=c+10;
    scanf("%s%d%f",c,a,f);
    printf("%-10s%-3d%5.2f\n",c,*a,*f);
}
