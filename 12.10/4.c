#include<stdio.h>
int Fib1(int n)//递归，需要内存，计算量大，需要时间多
{
    if (n<= 2)
    {
        return 1;
    }
    else
    {
        return Fib1(n-1)+Fib1(n-2);
    }    
}
int Fib2(int n)//循环，计算速度快
{
    int a = 1;
    int b = 1;
    int c = 1;
    while(n>2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int a = 0;
    int ret = 0;
    scanf("%d",&a);
    ret = Fib2(a);
    printf("ret = %d\n",ret);
    return 0;
}