#include <stdio.h>
int main()
{
    FILE *in=fopen("in","r"),*out=fopen("out","w");
    int a[11],sum=0;
    if(in==NULL)return 0;
    for(int i=1;!feof(in);i++)
    {
        fscanf(in,"%d",&a[i]);
        sum+=a[i];
    }
    fprintf(out,"%d,%.1f",sum,sum/10.0);
    fclose(in);fclose(out);
    return 0;
}
