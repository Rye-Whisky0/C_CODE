#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (scanf("%d %d %d",&a,&b,&c)==3)
    {
        //判断三角形，俩边之和大于第三边
        if ((a+b>c) && (a+c>b) && (b+c>a))
        {
            if (a==b && b==c)
            {
                printf("Equilateral triangle!\n");
            }
            else if ((a==b && b!= c) || (a==c && c!=b) ||(b==c && c!=a))
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("0rdinary triangle!\n");
            }
            
        }
        else
        {
            printf("Not a triangle!\n");
        }
        
        
    }
    
    return 0;
}