#include<stdio.h>
/* void text()
{
    static int a = 1;
    a++;
    //printf("请输入一个数字：");
    //scanf("%d",&a);
    if (a % 2 == 1)
    printf("该数为基数\n");
    else 
    printf("该数为偶数\n");
}  */
int main()
{
    int i = 1;
    while(i<=100)
    {
        if (i%2 ==1)//% —— 除后余（这里还可以写成i%2 ！= 0（！= ——不等于））
        printf("%d ",i);
        i++;
    }
    
    
    return 0;
}