#include <stdio.h>
int main()
{
    long long a;
    scanf("%lld",&a);
//    printf("%lld",a);
    if(a<=100000)
        printf("bonus=%lld\n",(long long)(a*0.1));
    else if(a<=200000)
        printf("bonus=%lld\n",(long long)(10000+(a-100000)*0.075));
    else if(a<=400000)
        printf("bonus=%lld\n",(long long)(17500+(a-200000)*0.05));
    else if(a<=600000)
        printf("bonus=%lld\n",(long long)(27500+(a-400000)*0.03));
    else if(a<=1000000)
        printf("bonus=%lld\n",(long long)(33500+(a-600000)*0.015));
    else
        printf("bonus=%lld\n",(long long)(39500+(a-1000000)*0.01));
    return 0;
}
