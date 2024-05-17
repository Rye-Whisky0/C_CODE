#include<stdio.h>
int main()
{
    int i = 0;
    double sum = 0.0;
    int a = 1;
    for ( i = 1; i <=100; i++)
    {
        sum += a*1.0/i;
        a=-a;
    }
    printf("%lf\n",sum);
    return 0;

}
/* int main()
{
    int i = 0;
    double sum1 = 0.0;
    double sum2 = 0.0;
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    for ( i = 1; i <=100; i+=2)
    {
        sum1 = 1.0/i;
        b = b + sum1;
    }
    for ( i = 2; i <=100; i+=2)
    {
        sum2 = 1.0/i;
        a = a + sum2;
    }
    c = b - a;
    printf("%lf\n",c);
    
    return 0;
} */