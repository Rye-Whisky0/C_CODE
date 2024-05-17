#include<stdio.h>
#include"Add.h"//引用自己做的函数Add.h
int main()
{
    int a = 10;
    int b = 20;
    int sum = 0;
    sum = Add(a,b);
    printf("sunm = %d\n",sum);
    return 0;
}