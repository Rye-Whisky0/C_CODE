#include<stdio.h>
int main()
{
    int m = 24;
    int n = 18;
    int r = 0;
    while (r = m%n)
    {
        //r = m%n;
        m = n;
        n = r;
    }
    printf("最大公约数是：%d\n",r);
    return 0;

}