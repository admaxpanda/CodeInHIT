#include <stdio.h>
int main()
{
    printf("Input math1, English and math2:");
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    printf("Final score = %.2f\n",(float)((a*5+b*1.5+c*3.5)/10));
    return 0;
}
