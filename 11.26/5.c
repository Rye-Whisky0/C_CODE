#include<stdio.h>
#include<math.h>
int main()
{
    int i = 0;
    int count = 0;
    for ( i = 100; i <= 200; i++)//i= 101;i<=200;i+=2偶数不可能是素数，在奇数中排除
    {
        //判断i是否为素数
        //素数的判断规则
        //1.试除法
        //产生2到i-1个数字
/*         int j = 0;
        for ( j = 2; j < i; j++)
    {
            if(i%j==0)
        {
            break;
        }
    }
        if(j == i)
        {
        count++;
        printf("%d ",i);
        }      */ 
        int j = 0;
        for ( j = 2; j <sqrt(i) ; j++)
        //如果有一个数i=a*b，那么a和b中至少有一个数字<=开平方i
        //运用库函数里的math.h中的sqrt
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        {
            count++;
            printf("%d ",i);
        }
    }
    printf("\ncount=%d\n",count);
    return 0;
}