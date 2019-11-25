#include <stdio.h>
int main()
{
    printf("Please enter the number:\n");
    int a=0,b=0;
    int n;
        scanf("%d",&n);
        if(n==-1)
        {
            printf("over!\n");
            goto tip1;
        }

        if(n%2)
        {
            printf("%d:odd\n",n);
            a++;
        }
        else
        {
            printf("%d:even\n",n);
            b++;
        }
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
            break;
        if(n%2)
        {
            printf("%d:odd\n",n);
            a++;
        }
        else
        {
            printf("%d:even\n",n);
            b++;
        }
    }
//    printf("over!\n");
tip1:    printf("The total number of odd is %d\nThe total number of even is %d\n",a,b);
}
