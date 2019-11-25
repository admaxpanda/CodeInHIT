#include <stdio.h>
int main()
{
//    char a[4];
//    printf("Input x:\n");
//    scanf("%s",a);
//    if(a[0]=='-')
//        printf("y=%c%c%c\n",a[3],a[2],a[1]);
//    else
//        printf("y=%c%c%c\n",a[2],a[1],a[0]);
    int a;
    printf("Input x:\n");
    scanf("%d",&a);
    if(a<0)a=-a;
    int b=a/100+(a%100-a%10)+a%10*100;
    printf("y=%d\n",b);
    return 0;
}
