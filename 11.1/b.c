#include<stdio.h>
int main()
{
    int a = 10;
    //int b = a++;//后置++，先使用，再++
    //int b = ++a;//前置++，先++，再使用
    //int b = a--;//后置--，先使用，再--
    int b = --a;//前置--，先--，再使用
    printf("a = %d b = %d\n",a,b);
    return 0;
}