#include <stdio.h>
#include <direct.h>
int main()
{
    FILE *t1=fopen("D:\\test1.txt","w"),*t2=fopen("../Dir1//test2.txt","w");
    return 0;
}
