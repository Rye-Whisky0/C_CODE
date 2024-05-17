#include<stdio.h>
int main()
{
    printf("%d",printf("%d",printf("%d",43)));//嵌套函数，printf返回屏幕打印有多少个数字就是几
    return 0;
}
/* int main()
{
    int len = 0;
    len = strlen("abc");
    printf("%d\n",len);
    //printf("%d\n",strlen("abc"));这种方法也可以
    return 0;
} */