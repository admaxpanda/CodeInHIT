#include <stdio.h>
int main()
{
    FILE *in=fopen("student.txt","rb");
    FILE *out=fopen("D://ABC/test.dat","wb");
    char ch;
    while(!feof(in))
    {
        ch=fgetc(in);
        fputc(ch,out);
    }
    return 0;
}
