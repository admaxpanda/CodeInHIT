#include <stdio.h>
int main()
{
    char ch;
    FILE *in=fopen("C����.png","rb"),*out=fopen("QWQ.png","wb");
    while(!feof(in))
    {
        ch=fgetc(in);
        fputc(ch,out);
    }
    fclose(in),fclose(out);
    return 0;
}
