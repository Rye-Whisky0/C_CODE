#include<stdio.h>
#include<math.h>
int main()
{
    int i  = 0;
    for ( i = 0; i <= 100000; i++)
    {
        //判断i是否为”水仙花数“
        //1234
        //1.计算i是几位数 -> n
        int n = 1;
        int tmp = i;
        int sum = 0;
        while (tmp/10)
        {
            n++;
            tmp /= 10;
        }
        //2.得到i的每一位，计算他的n次方之和
        tmp = i;
        while (tmp)
        {
            sum += pow(tmp % 10,n);
            tmp /=10;
        }
        if (sum ==i)
        {
            printf("%d ",i);
        }
        
    }
    
    return 0;

}