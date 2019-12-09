#include <stdio.h>
int main()
{
    char ch[200];
    FILE *t1=fopen("Text1.txt","a"),*t2=fopen("Text2.txt","r");
    fgets(ch,200,t2);
    fputs(ch,t1);
    return 0;
}
