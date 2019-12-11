#include <stdio.h>
char name[50],key[50];
int main()
{
    printf("请输入源文件路径:\n");
    scanf("%s",name);
    FILE *in=fopen(name,"rb");
    printf("请输入密钥:\n");
    scanf("%s",key);
    printf("请输入输出路径:\n");
    scanf("%s",name);
    FILE *out=fopen(name,"wb");
    int p=0;char ch;
    while(!feof(in))
    {
        ch=fgetc(in);
        if(key[p]=='\0')p=0;
        fputc(key[p]^ch,out);
    }
    fclose(in),fclose(out);
    return 0;
}
