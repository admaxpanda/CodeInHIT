#include <stdio.h>
int main()
{
    FILE *in=fopen("ex1504.txt","r");
    char c=fgetc(in);
    int ch=0,num=0,oth=0;
    while(c!=EOF)
    {
        if(c>='0'&&c<='9')num++;
        else if(c>='A'&&c<='Z'||c>='a'&&c<='z')ch++;
        else oth++;
        c=fgetc(in);
    }
    printf("字符：%d 数字：%d 其他：%d",ch,num,oth);
    fclose(in);
    return 0;
}
