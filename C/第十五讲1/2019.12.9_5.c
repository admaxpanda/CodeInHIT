#include <stdio.h>
char ch[50];
int a[4],b[5],c[3];
int main()
{
    FILE *in=fopen("ex1505.txt","r");
    fscanf(in,"%d%d%d",a+1,a+2,a+3);
    fscanf(in,"%d%d%d%d",b+1,b+2,b+3,b+4);
    fscanf(in,"%d%d",c+1,c+2);
    fclose(in);
    printf("º“Õ•1:%f\nº“Õ•2:%f\nº“Õ•3:%f\n",(a[1]+a[2]+a[3])/3.0,(b[1]+b[2]+b[3]+b[4])/4.0,(c[1]+c[2])/2.0);
    return 0;
}
