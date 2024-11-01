#include<stdio.h>
#include<string.h>
int main()
{
    //1.strlen 和sizeof 没有什么关联
    //2.strlen 是求字符串长度的————只能针对字符串求长度————库函数————使用得引用头文件
    //sizeof 计算变量、数组、类型的大小————单位是字节————操作符
    char arr[] = "abc";
    char arr2[] = {'a','b','c'};
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr2));
    printf("%d\n",strlen(arr));
    printf("%d\n",strlen(arr2));
    return 0;
}