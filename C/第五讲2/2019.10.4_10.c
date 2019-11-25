#include <stdio.h>
int main()
{
    printf("Input your password:\n");
    char c;
    int i=1;
    while(1)
    {
        c=getchar();getchar();
        if(c>='0'&&c<='9')
            printf("%c, you have enter %d-bits number\n",c,i++);
        else
            printf("error\n");
        if(i==7)return 0;
    }
}
