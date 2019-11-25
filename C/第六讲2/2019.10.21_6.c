#include<stdio.h>
   int main()
   {
       int score;
       char grade;
       int a;
       while(1)
       {
            printf("Please input score:\n");
            a=scanf("%d", &score);
            if(a!=1)
            {
                printf("Input error!\n");
                while(getchar()!='\n');
                continue;
            }
            if (score < 0 || score > 100)
            {
                printf("Input error!\n");
                continue;
            }
            else if (score >= 90)
                grade = 'A';
            else if (score >= 80)
                grade = 'B';
            else if (score >= 70)
                grade = 'C';
            else if (score >= 60)
                grade = 'D';
            else
                grade = 'E';
            break;
       }
        printf("grade: %c\n", grade);
        return 0;
}
