#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void jiemian(int x)
{
    system("cls");
    if(x==1)
    {
        printf("\n\n");
        printf("  ********************************\n");
        printf("  *                              *\n");
        printf("  *     >十进制数转二进制数      *\n");
        printf("  *      十进制数转八进制数      *\n");
        printf("  *      十进制数转16进制数      *\n");
        printf("  *      退出                    *\n");
        printf("  *                              *\n");
        printf("  ********************************\n");
    }
    if(x==2)
    {
        printf("\n\n");
        printf("  ********************************\n");
        printf("  *                              *\n");
        printf("  *      十进制数转二进制数      *\n");
        printf("  *     >十进制数转八进制数      *\n");
        printf("  *      十进制数转16进制数      *\n");
        printf("  *      退出                    *\n");
        printf("  *                              *\n");
        printf("  ********************************\n");
    }
    if(x==3)
    {
        printf("\n\n");
        printf("  ********************************\n");
        printf("  *                              *\n");
        printf("  *      十进制数转二进制数      *\n");
        printf("  *      十进制数转八进制数      *\n");
        printf("  *     >十进制数转16进制数      *\n");
        printf("  *      退出                    *\n");
        printf("  *                              *\n");
        printf("  ********************************\n");
    }
    if(x==4)
    {
        printf("\n\n");
        printf("  ********************************\n");
        printf("  *                              *\n");
        printf("  *      十进制数转二进制数      *\n");
        printf("  *      十进制数转八进制数      *\n");
        printf("  *      十进制数转16进制数      *\n");
        printf("  *     >退出                    *\n");
        printf("  *                              *\n");
        printf("  ********************************\n");
    }
}
void dec2bin(int x)
{
    if(x>0)
        dec2bin(x/2);
    else return;
    printf("%d",x%2);
    return;
}
void dec2oct(int x)
{
    if(x>0)
        dec2bin(x/8);
    else return;
    printf("%d",x%8);
    return;
}
void dec2hex(int x)
{
    if(x>0)
        dec2bin(x/16);
    else return;
    printf("%x",x%16);
    return;
}
void zhuanhua(char a[],void (*p)(int))
{
    int x;
    system("cls");
    printf("当前是十进制转化为%s进制\n请输入您要转化的数字：\n",a);
    scanf("%d",&x);
    printf("%d转化后的数字为:\n",x);
    (*p)(x);
    printf("\n");
    system("pause");
    return;
}
int main()
{
    int x=1;
    char c;
    jiemian(1);
    char a[3][4]={"二","八","16"};
    while(1)
    {
        c=getch();
        if(c==72)
        {
            if(x==1)x=4;
            else x--;
            jiemian(x);
        }
        if(c==80)
        {
            if(x==4)x=1;
            else x++;
            jiemian(x);
        }
        if(c==13)
        {
            if(x==4)return 0;
            if(x==1)zhuanhua(a[0],dec2bin);
            if(x==2)zhuanhua(a[1],dec2oct);
            if(x==3)zhuanhua(a[2],dec2hex);
            jiemian(x);
        }
    }
}
