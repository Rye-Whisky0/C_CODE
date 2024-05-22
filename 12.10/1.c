#include<stdio.h>
void print(int n)
{
    if (n > 9)//递归要满足条件再继续，不满条件便不再继续
    //递归调用后越来越接近这个限制条件
    {
        print(n/10);
    }
    printf("%d ",n %10);
}
int main()
{
    unsigned int num = 0;
    scanf("%d",&num);
    print(num);
    return 0;
}