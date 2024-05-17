#include<stdio.h>
int main()
{
    int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
    int max = arr[0];//假设数组第一个是最大值才可对比
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);//求元素个数
    for ( i = 0; i <sz; i++)
    {
        if (arr[i]>max)//判断下标i的数组是否大于max
        {
            max = arr[i];
        }
        
    }
    printf("max = %d\n",max);
    return 0;
}