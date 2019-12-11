#include <stdio.h>
int main()
{
    FILE *in=fopen("b.txt","rb");
    FILE *out=fopen("a.txt","ab");
    char ch;
    while(!feof(in))
    {
        ch=fgetc(in);
        fputc(ch,out);
    }
    return 0;
}
