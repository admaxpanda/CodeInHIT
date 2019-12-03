#include <stdio.h>
struct qwq
{
    unsigned int p:16;
    unsigned int q:16;
}qaq;
int main()
{
    void *p=&qaq;
    scanf("%d",(unsigned int*)p);
    printf("%d,%d",qaq.p,qaq.q);
}
