#include<stdio.h>
int Fac1(int n)//循环
{
    int i = 0;
    int ret = 1;
    for ( i = 1; i <=n; i++)
    {
        ret *= i;
    }
    return ret;
}
int Fac2(int n)//递归
{
    if (n<=1)
    {
        return 1;
    }
    else
    {
        return n*Fac2(n-1);
    } 
}
int main()
{
    int a = 0;
    int ret = 0;
    scanf("%d",&a);
    ret = Fac2(a);
    printf("%d\n",ret);
    return 0;
}