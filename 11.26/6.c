#include<stdio.h>
int main()
{
    int i =0;
    int count = 0;
    for ( i=1; i <=100; i++)
    {
        //if ((i%10==9)||(i/10==9))
        if(i%10==9)
            count++;
        if(i/10==9)
            count++;

    }
    printf("\ncount=%d\n",count);
    
    return 0;
}