#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d",&a,&b,&c);
    if (a<b)
    {
        int mar = a;
        a = b;
        b = mar;
    }
    if (a<c)
    {
        int mar = a;
        a = c;
        c = mar;
    }
    if (b<c)
    {
        int mar = b;
        b = c;
        c = mar;
    }
    printf("%d %d %d\n",a,b,c);
    
    return 0;
}