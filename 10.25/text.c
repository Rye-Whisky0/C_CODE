#include<stdio.h>

int main()
{
    //arr是数组，打印字符用%s
    char arr1[] = "abc";//用“”引起来的叫字符串，‘’引起的叫单字符
    char arr2[] = {'a','b','c',0};//斜杠零表示字符串结束的标识
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%d\n",strlen(arr1));//strlen —— string length —— 计算字符长度
    printf("%d\n",strlen(arr2));

    return 0;
}