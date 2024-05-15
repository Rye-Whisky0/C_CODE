#include<stdio.h>
//static修饰函数
//也是改变了函数的作用域————这样的说法不准确
//static修饰函数改变了函数的了链接属性
int Add(int x ,int y)
{
    return x + y;
}
//extern int  Add(int ,int );
int main()
{
    int a = 10;
    int b = 20;
    int sum = Add(a,b);
    printf("sum = %d\n",sum );  
    return 0;
}

/* int u_gval = 2023;//全局变量
//static 修饰全局变量
//改变了变量的作用域   —— 让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没办法再使用了
//
int main()
{
    //extern声明外部符号的
    printf("u_gval = %d\n",u_gval);
    return 0;
} */
/* //static修饰局部变量
//局部变量的生命周期边长
void test()
{
    static int a = 1;
    a++;
    printf("a = %d\n",a);
}
int main()
{
    int i = 0;
    while (i<5)
    {
        test();    
        i++;
    }
    
    return 0;
} */