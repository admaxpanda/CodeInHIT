#include <stdio.h>
struct qaq
{
    int shi,fen;
}t[3];
int main()
{
    printf("Input time one:(hour£¬minute):");
    scanf("%d,%d",&t[1].shi,&t[1].fen);
    printf("Input time two: (hour£¬minute):");
    scanf("%d,%d",&t[2].shi,&t[2].fen);
    int a=t[1].shi*60+t[1].fen;
    int b=t[2].shi*60+t[2].fen;
    if(a<b)a^=b^=a^=b;
    printf("%dhour,%dminute\n",(a-b)/60,(a-b)%60);
    return 0;
}
