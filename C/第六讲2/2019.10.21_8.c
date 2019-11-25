#include <stdio.h>
int main()
{
    int a;
    printf("Input n(27<n<=77):\n");
    scanf("%d",&a);
    for(int i=0;i*4<=a;i++)
    {
        for(int k=a/3;k>=0;k--)
        {
            //if(k/3==(k-1)/3||k/3==(k-2)/3)continue;
            if(i*4+k*3>a)continue;
            for(int j=0;j/2+i*4+k*3<=a;j++)
            {
                if(j/2==(j-1)/2)continue;
                if(j/2+i*4+k*3==a && i+j+k==36)
                    printf("men=%d,women=%d,children=%d\n",i,k,j);
            }
        }
    }
    return 0;
}
