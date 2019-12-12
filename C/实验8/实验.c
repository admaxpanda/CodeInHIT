#include <stdio.h>
int main()
{
    FILE *in=fopen("stRecord1.txt","rb");
    FILE *out=fopen("stRecord2.txt","wb");
    int sum,cnt;char c[20];
    for(int i=1;i<=10;i++){
        sum=0;
        for(int k=1;k<=7;k++)
        {
            if(k==1){
                fscanf(in,"%d",&cnt);
                fprintf(out,"%-5d",cnt);
            }
            else if(k==2){
                fscanf(in,"%s",c);
                fprintf(out,"%12s ",c);
            }
            else {
                fscanf(in,"%d",&cnt);
                sum+=cnt;
            }
        }
        fprintf(out,"%d %.2f\n",sum,sum/5.0);
    }
    fclose(in),fclose(out);
    return 0;
}
