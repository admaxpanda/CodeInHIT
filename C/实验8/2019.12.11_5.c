#include <stdio.h>
char name[50],key[50];
int main()
{
    printf("������Դ�ļ�·��:\n");
    scanf("%s",name);
    FILE *in=fopen(name,"rb");
    printf("��������Կ:\n");
    scanf("%s",key);
    printf("���������·��:\n");
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
