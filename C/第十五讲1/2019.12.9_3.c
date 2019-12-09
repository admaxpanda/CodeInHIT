#include <stdio.h>
int main()
{
    char ch;
    FILE *in=fopen("ex1503.txt","rb"),*out=fopen("ex1503a.txt","wb");
    ch=fgetc(in);
    while(ch!=EOF)
    {
        if(ch!='#')
            fputc(ch,out);
        ch=fgetc(in);
    }
    fclose(in),fclose(out);
    return 0;
}
