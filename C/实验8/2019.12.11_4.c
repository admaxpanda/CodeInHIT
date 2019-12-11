#include <stdio.h>
char ch[100000];//因为慕课的系统上限就是一万字符
int main()
{
    //这个例子是分割成两个文件
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
