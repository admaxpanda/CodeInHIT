#include <stdio.h>
int main()
{
    int a,c;
    printf("Please input score:\n");
    c=scanf("%d",&a);
    if(c!=1 || a<0 || a>100)
    {
        printf("Input error!\n");
        return 0;
    }
    else if(a>=90)
        printf("grade: A\n");
    else if(a>=80)
        printf("grade: B\n");
    else if(a>=70)
        printf("grade: C\n");
    else if(a>=60)
        printf("grade: D\n");
    else
        printf("grade: E\n");
}
// #include<stdio.h>
//   int main()
//   {
//       int score;
//       char grade;
//       printf("Please input  score:");
//       int c=scanf("%d", &score);
//       if(c!=1 || score<0)
//       {
//           printf("Input error!\n");
//           return 0;
//       }
//       if (score < 0 || score >= 100)
//       {
//            printf("Input error!\n");
//            return 0;
//       }
//
//        else if (score >= 90)
//             grade = 'A';
//        else if (score >= 80)
//             grade = 'B';
//        else if (score >= 70)
//             grade = 'C';
//        else if (score >= 60)
//             grade = 'D';
//        else
//             grade = 'E';
//        printf("grade:%c\n", grade);
//        return 0;
//}
