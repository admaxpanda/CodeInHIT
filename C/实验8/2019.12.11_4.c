#include <stdio.h>
char ch[100000];//��ΪĽ�ε�ϵͳ���޾���һ���ַ�
int main()
{
    //��������Ƿָ�������ļ�
    FILE *in=fopen("in.txt","rb");
    FILE *a=fopen("a.txt","wb"),*b=fopen("b.txt","wb");
    int p=0;
    while(!feof(in))
        ch[p++]=fgetc(in);
    for(int i=0;i<p/2;i++)
        fputc(ch[i],a);
    for(int i=p/2;i<p;i++)
        fputc(ch[i],b);
    fclose(in),fclose(a),fclose(b);
    return 0;
}
