#include<stdio.h>
int is_priem(int x)
{
    int y = 0;
    //int count = 0;
    for ( y = 2; y < x; y++)//优化后的，屏蔽的是优化前的代码。y<=sqrt(x)
    {
        if (x%y == 0)
        return 0;
    }
    return 1;

/*         {
            break;
        }   
    }
    if (y == x)
    {
        return 1;
    }
    else
    {
        return 0;
        count++;
    }
     */
        
}
int main()
{
    int i = 0;
    for ( i = 100; i <= 200; i++)
    {
        if (is_priem(i) == 1)
        {
            printf("%d ",i);
        }    
    }
    
    return 0;
}