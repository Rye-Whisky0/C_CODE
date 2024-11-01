#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
    //确定冒泡函数的趟数
    int flag = 1;//假设这一趟排序的数据已经有序
    int i = 0;
    //每一趟冒泡排序
    for ( i = 0; i <sz-1; i++)
    {
        int j = 0;
        for ( j = 0; j <sz-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag = 0;//本趟排序数据其实不完全有序
            }
        }
        if (flag == 1)
        {
            break;
        }
        
    }
    
}
int main()
{
    int arr[] = {5,6,3,8,9,7,1,2,4};
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    //对arr进行排序，排成升序
    //arr是数组，我们对数组arr进行传参，实际上传递过去的事数组arr首元素的地址&arr【0】
    bubble_sort(arr,sz);//冒泡排序函数
    for ( i = 0; i <sz; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
/* int arr[] = {1,2,3,4,5};
printf("%p\n",arr);数组首元素的地址
printf("%p\n",&arr{0});同上
printf("%p\n",&arr);数组的地址 */