#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
    char arr1[] = "welcome to 101!!!!!!";
    char arr2[] = "####################";
    int left = 0;
    int right = strlen(arr1)-1;//查找字符串长度，引用头文件#include<string.h>
    while (left<= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);//休息1000毫秒,引用头文件#include<windows.h>
        system("cls");//执行系统命令的一个函数——system。cls——清空屏幕。引用头文件#include<stdlib.h>
        left++;
        right--;
    }
    
    return 0;

}