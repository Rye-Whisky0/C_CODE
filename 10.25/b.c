#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10整形的数组
    int i = 0;
    while(i<10)
    {
        printf("%d " ,arr[i] );//下标的方式访问元素，arr[下标]
        i++;
    }
    return 0;

}