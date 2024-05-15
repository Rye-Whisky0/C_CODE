#include<stdio.h>
/* int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    scanf("%d",&n);
    for (i = 1;i<=n;i++)
{
    ret = ret * i;
}
printf("ret = %d\n",ret );
    return 0;
} */
int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
        for ( i = 1; i <=10; i++)
    {
       ret =  ret * i;
       sum = sum + ret;
    }   

    printf("十的阶乘 = %d \n",sum);
    
    return 0;
}