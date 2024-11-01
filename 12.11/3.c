#include<stdio.h>
#include<string.h>
int main()
{
    int arr[3] [4] = {{7,8,5},{4,3,}};//二维数组的使用，一样试使用下标
    // 7 8 5 0
    // 4 3 0 0 
    // 0 0 0 0
    int i = 0;
    for ( i = 0; i < 3; i++)
    {
        int j = 0;
        for ( j = 0; j <4; j++)
        {
            printf("%d ",arr[i] [j]);
        }
        printf("\n");
    }
    
    return 0;
}