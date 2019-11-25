#include <stdio.h>
int main()
{
    printf("Input percent of A and B:");
    float a,b;
    scanf("%f%f",&a,&b);
    printf("compete = %.4f\nstandard = %.4f\n",a*10+b*6,a*8+b*10);
    if(a*10+b*6>a*8+b*10)
        printf("The Best Response is compete!");
    else
        printf("The Best Response is standard!");
    return 0;
}
