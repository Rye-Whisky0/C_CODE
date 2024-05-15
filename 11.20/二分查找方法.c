#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数
    int left = 0;//左下标
    int right =9;//右下标
    int k = 17;
    while (left<=right)//条件左下标若大于右下标则无元素个数，则不进入循环
    {
    int mid = (left+right)/2;//中间元素下标
        if (arr[mid] > k)
        {
            right = mid - 1;
        }
    else if (arr[mid] < k)
        {
            left = mid +1;
        }
    else
        {
            printf("找到了下表是：%d\n",mid);
            break;
        }
    }
    if(left>right)
    printf("找不到\n");
    return 0;
}