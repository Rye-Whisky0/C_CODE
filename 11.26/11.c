#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char input[20] = {0};
    system("shutdown -t -s 60");
    while (1)
    {
        printf("你的电脑将在一分钟内关机，是否取消关机？是的话请输入我是猪，否则将自动关机\n请输入:");
        scanf("%s",input);
        if (strcmp(input,"我是猪") == 0)
        {
            system("shutdown -a");
            break;
        }
    }
    
    return 0;
}