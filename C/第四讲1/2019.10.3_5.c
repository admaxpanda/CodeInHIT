#include <stdio.h>
int main()
{
    int a;float b;
    scanf("%d,%f",&a,&b);
    if(b<=0)
    {
        printf("Error in Area\nPrice:  0.00\n");
        return 0;
    }
    b=b-1;
    if(b<0)b=-1;
//    a=4,b=3.5;
    switch(a)
    {
        case 0:printf("Price: %5.2f\n",(float)(((int)b+1)*3+10));break;
        case 1:printf("Price: %5.2f\n",(float)(((int)b+1)*4+10));break;
        case 2:printf("Price: %5.2f\n",(float)(((int)b+1)*5+15));break;
        case 3:printf("Price: %5.2f\n",(float)(((int)b+1)*6.5+15));break;
        case 4:printf("Price: %5.2f\n",(float)(((int)b+1)*10+15));break;
        default:printf("Error in Area\nPrice:  0.00\n");
    }
    return 0;
}
