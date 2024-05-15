#include<stdio.h>
/*  int main()
 {
    int ch = 0;
    while ((ch = getchar()) != EOF)//EOF ——end of file 文件结束标志
    {
        putchar(ch);
    }
    
    return 0;
 }  */
/*  int main()
 {
    int ret = 0;
    char password[20] = {0};
    int ch = 0;
    printf("请输入密码：>");//输入密码，并存放在password数组中
    //缓冲区剩一个‘\n’
    //读取一下‘\n’
    scanf("%s",password);
    while((ch = getchar()) != '\n')
    {
        ;
    }
    printf("请确认密码(Y/N):>");
    ret  = getchar();
    if (ret == 'Y')
    {
        printf("确认成功\n");

    }
    else 
    {
        printf("确认失败\n");
    }
    return 0;
 } */
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if(ch < '0' || ch >'9')//除了字符0-9之外其他不输出
        continue;
        putchar(ch);
    }
    
    return 0;
}