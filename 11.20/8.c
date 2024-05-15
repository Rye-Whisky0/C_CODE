#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    char  password[20] = {0};
    for ( i = 0; i < 3; i++)
    {
        printf("请输入密码：");
        scanf("%s",password);
        if (strcmp(password,"123456") == 0)//==不能用来比较俩个字符串是否相等，应该使用一个库函数——strcmp
        //俩个字符串比较，如果相等则会返回0；若前>后则会返回一个大于零的数字，若前<后则会返回一个小于零的数字
        {
            printf("密码正确，登录成功\n");
            break;
        }
        else 
        {
            printf("密码错误，请重试\n");
        } 
    }
    if (i == 3)
    {
        printf("三次密码均错误，退出系统\n");
    }
    return 0;
}