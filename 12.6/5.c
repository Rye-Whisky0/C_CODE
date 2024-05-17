#include <stdio.h>
void Asd(int* pa)
{
    *pa += 1;
}
int main()
{
    int num = 0;
    Asd(&num);
    printf("num = %d\n",num);
    Asd(&num);
    printf("num = %d\n",num);
    Asd(&num);
    printf("num = %d\n",num);
    return 0;
}