#include<stdio.h>
int main()
{
    int a = 10;//向内存调用4个字节
    //a里面有个地址
    int*p = &a;//p是一个变量——指针变量，&——取地址操作符
    //我要把a的地址取出来，存放在p，用*去存地址
    printf("%p\n",&a);//打印地址%p
    printf("%p\n",p);
    *p = 20;//* ——解引用操作符
    printf("a = %d\n",a );
    // 有一种变量是用来存放地址的——指针变量
    char ch = 'a';
    char*pc = &ch;//字符变量——char
    printf("%d\n",sizeof(pc));
    printf("%c\n",ch);//打印字符%c
    double d = 3.14;
    double*pd = &d;
    *pd = 6.6;
    printf("%lf\n",d);
    return 0;
}