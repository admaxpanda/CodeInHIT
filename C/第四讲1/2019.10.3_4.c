    #include <stdio.h>
    int main()
    {
        char c;
        scanf("%c",&c);
        printf("Input simple:\n");
        if(c>='0'&&c<='9')
            printf("It is a digit character.\n");
        else if(c>='A'&&c<='Z' || c>='a'&&c<='z')
            printf("It is an English character.\n");
        else
            printf("It is other character.\n");
        return 0;
    }
