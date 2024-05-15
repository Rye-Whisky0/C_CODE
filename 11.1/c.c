#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int max = 0;
    max = (a > b ? a : b);//条件操作符如果a>b就输出a，否则输出b
    printf("max = %d\n",max);
    return 0;
} 