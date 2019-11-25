#include <stdio.h>
int main()
{
    printf("Man   Women   Children\n");
    for(int a=0;a*3<=50;a++)
    {
        for(int b=0;b*2+a*3<=50;b++)
        {
            for(int c=0;c+b*2+a*3<=50;c++)
            {
                if(c+b*2+a*3==50&&a+b+c==30)
                    printf("%3d%8d%8d\n",a,b,c);
            }
        }
    }
    return 0;

}
