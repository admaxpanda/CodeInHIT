#include <stdio.h>
int main()
{
    printf("Input length and days:");
    float a;
    int b;
    scanf("%f,%d",&a,&b);
//  °æ±¾1
//    for(int i=1;i<=b;i++)
//        a*=0.5;

//  °æ±¾2
//    int i=1;
//    while(i<=b)
//    {
//        a*=0.5;
//        i++;
//    }

    printf("length=%.5f\n",a);
    return 0;
}
