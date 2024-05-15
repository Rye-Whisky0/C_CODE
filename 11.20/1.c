#include <stdio.h>

int main()
{
    int age = 0;
    printf("请输入你的年龄:");
    scanf("%d", &age );
    if (age <18)
    printf("未成年\n");
    else if (age >= 18 && age <35)
    printf("青年人\n");
    else if (age >= 35 && age <50)
    printf("中年人\n");
    else
    printf("老年人\n");

    return 0;
}