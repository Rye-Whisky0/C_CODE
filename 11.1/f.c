#include<stdio.h>
struct Book
{
    char name[20];
    short price; 
};
int main ()
{
    //利用结构体类型——创建一个该类型的结构体变量
    struct Book b1 = {"C语言程序设计",55};
    struct Book* pb = &b1;
    //利用pb打印我的书名和价格
    //. ——结构体变量.成员
    //—> ——结构体指针—>成员
    
    printf("%s\n", pb->name);
    printf("%d\n", pb->price);
    //printf("%s\n",(*pb).name);
    //printf("%d\n",(*pb).price);
    //printf("书名：%s\n",b1.name);
    //printf("价格：%d元\n",b1.price);
    b1.price = 20;
    printf("降价后的价格：%d元\n",b1.price);
    return 0;
}