#include <stdio.h>
#include <string.h>
//这个破题我是真写不出来
int main()
{
    int x1=0, x2=0;
    int c=0;
    do
    {
        printf("Input x1, x2:\n");
        int c=scanf("%d,%d\n",&x1,&x2);
        if(c!=2)
            while(c--)
            getchar();
        printf("%d\n",c);
    }while (x1*x2<=0 || c!=2);
    printf("x1=%d,x2=%d\n", x1, x2);
//    while(1)
//    {
//        if(x1*x2>0 && c==2)
//        {
////            printf("QAQ");
//            break;
//        }
////        printf("%d %d",x1,x2);
//        printf("Input x1, x2:\n");
//        c=scanf("%d,%d",&x1,&x2);
//    }
//    char a[2000];
//    int x1,x2;
//    while(1)
//    {
//        int flag=0;
//        int flag2=0;
//        char a[2000];
//        x1=0;x2=0;
//        printf("Input x1, x2:\n");
//        scanf("%s",a+1);
//        int i=0;
//        //printf("%s",a+1);
//        while(++i)
//        {
//            if(a[i]==',')
//                break;
//        }
//        //printf("%d",i);
//        for(int k=1;k<i;k++)
//        {
//            //printf("%d\n",a[k]-45);
//            if(a[k]>=48&&a[k]<=57)
//                x1=x1*10+a[k]-48;
//            else if(a[k]=='-')
//                flag2++;
//            else
//                flag++;
//        }
////        printf("%d",x1);
//        if(flag)continue;
//        if(flag2)x1=-x1;
//        flag2=0;
//        flag=0;
//        for(int k=i+1;k<=strlen(a+1);k++)
//        {
//            if(a[k]>=48&&a[k]<=57)
//                x2=x2*10+a[k]-48;
//            else if(a[k]=='-')
//                flag2++;
//            else
//                flag++;
//        }
//        if(flag)continue;
//        if(flag2)x2=-x2;
////        printf("%d %d\n",x1,x2);
//        if(x1*x2<0)
//            break;
//    }
    printf("x1=%d,x2=%d\n",x1,x2);
    return 0;
}
