#include<stdio.h>

int main()
{
    int line = 0;
    printf("进入大学\n");
    while(line<20000)

    {
        printf("我要敲一行代码:%d\n",line);
        line++;
    }
    if (line>=20000)
    printf("我就能获得好office\n");
    return 0;
}