#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    int a = 0;
    system("shutdown -s -t 60");
again:
    printf("你的电脑即将关机，若想取消关机请输入，我是猪\n请输入:");
    scanf("%d",&a);
    if ( a == 0)
        system("shutdown -a");
    else
        goto again;    
    return 0;
}