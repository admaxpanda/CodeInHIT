#include <stdio.h>
int main()
{
    FILE *a=fopen("a.txt","rb");
    FILE *b=fopen("b.txt","rb");
    char A,B;
    while(!feof(a)&&!feof(b))
    {
        A=fgetc(a),B=fgetc(b);
        if(A!=B)
        {
            printf("��ͬ��");
            fclose(a),fclose(b);
            return 0;
        }
    }
    if(feof(a)&&(!feof(b))
       ||(!feof(a))&&feof(b))
        printf("��ͬ��");
    else
        printf("��ͬ��");
    fclose(a),fclose(b);
    return 0;
}
