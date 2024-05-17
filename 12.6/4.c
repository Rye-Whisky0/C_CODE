#include<stdio.h>
                 //本质上arr是一个指针
binary_search(int arr[],int k,int sz)
{
    //int sz = sizeof(arr)/sizeof(arr[0]);//此时已经不可用这个方法在函数里计算了
    //计算是指针4/4=1，解决方法放在函数外计算,再把sz传进来
    int left = 0;
    int right = sz-1;
    while (left <= right)
    {
        int mid = (left+right)/2;
        if (arr[mid] < k)
        {
            left = mid + 1;
        }
            else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
        
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);
                           //传过去是arr首元素地址
    int ret = binary_search(arr,k,sz);
    if(ret == -1)
        printf("找不到指定数字\n");
    else    
        printf("找到了下标是：%d\n",ret);
    
    
    return 0;
}