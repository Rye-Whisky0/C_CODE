#include<stdio.h>
int Add(int x ,int y)//自定义函数
{
    int z = x+y;
    return z;
}
int main()
{
    int a = 10;
    int b = 20;
    int c = 0;
    c = Add(a,b);
    printf("c = %d\n",c) ;
    return 0;
}