#include<stdio.h>
int main()
{
    char arr[10001] = { 0 };
    //scanf("%s",&arr);
    gets(arr);//读取数据
    //逆序
    int left = 0;
    int right = strlen(arr) - 1 ;
    while(left < right)
    {
        int tmp = left;
        left = right;
        right = tmp;
        left++;
        right--;
    }
    printf("%s",arr);
    return 0;
}