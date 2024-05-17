#include <stdio.h>
vido Wsap1(int x, int y)
{
    int tmp = 0;
    tmp = x;
    x = y;
    y= tmp;
}
void Wsap2(int* pa,int* pb)//int*p指针类型，只能放地址
{
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;

}
int main()
{
    int a = 10;
    int b = 20;
    printf("a= %d b = %d\n",a,b);
    Wsap1(a,b);
    //调用Wsap1函数（传值调用）
    Wsap2(&a,&b);//取地址放在指针
    //调用Wsap2函数（传址调用）
    printf("a= %d b = %d\n",a,b);
    return 0;
}