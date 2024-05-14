#include<stdio.h>

int main()
{
    int input = 0;
    printf("进入大学\n");
    printf("你要好好学习吗？(0/1)>:");
    scanf("%d", &input);
    if(input == 1)
        printf("你会有一个好的office\n");      
    else
        printf("那你只能回家卖红薯\n");
    return 0;
}