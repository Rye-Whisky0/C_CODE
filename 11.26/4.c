#include<stdio.h>
int main()
{
    int year = 0;
    int count = 0;
    for ( year = 1000; year <= 2000; year++)
    {
        //判断闰年
        //1.能被4整除并且不能被100整除
        //2.能被400整除
   /*      if (year%4==0 && year%100!=0)
        {
            printf("%d ",year);
            count++;
        }
        else if (year%400==0)
        {
            printf("%d ",year);
            count++;
        } */
        if (((year%4==0)&&(year%100!=0))||(year%400==0))
        {
            printf("%d ",year);
            count++;
        }
        
        
        
    }
    printf("\ncount = %d\n",count);
    return 0;
}