#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void mune()
{
    printf("#####   数字游戏  #####\n");
    printf("###1.play    0.exit####\n");
    printf("#######################\n");
}
void game()
{
    int ret = 0;
    int a = 0;
    //1.生成随机数
    //拿时间戳确定随机数的初始值
    //time_t time(rime_t *timer)
    ret = rand()%100+1;//生成1-100的随机数，rand生成的数字是0-32767
    //2.猜数字
    while (1)
    {
        printf("请猜一个数:>");
        scanf("%d",&a);
        if (a > ret)
        {
         printf("猜大了\n");   
        }
        else if (a < ret )
        {
            printf("猜小了\n");
        }
        else
        {
            printf("恭喜你猜对了!\n");
            break;
        }    
    }   
}
int main()
{
    int input = 0;
    srand((unsigned int)time (NULL));//MULL空指针，unsigned int强制转换整形
    do
    {
        mune();//游戏菜单
        printf("请选择:>");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            game();//猜数字游戏
            break;
        case 0: 
            printf("退出游戏\n");
            break;
        default:
            printf("输入错误，请重新输入\n");
            break;
        }
    } while (input);
    
    return 0;
}