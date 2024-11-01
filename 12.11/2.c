#include<stdio.h>
#include<string.h>
int main()
{
/*     char arr[] = "abcdef";
    int i = 0;
    int len = strlen(arr);
    for ( i = 0; i < len; i++)
    {
        printf("%c ",arr[i]);
    } */
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    for ( i = 0; i <sz; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}