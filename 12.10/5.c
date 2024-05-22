#include<stdio.h>
#define ROW 3
#define COL 3
void menu()
{
    printf("***************************\n");
    printf("**1.开始游戏   0.退出游戏**\n");
    printf("***************************\n");

}
 void InitBoard(char board[ROW][COL],int row,int col)
{
    int i = 0;
    int j = 0;
    for ( i = 0; i <row; i++)
    {
        for(j = 0;j <col;j++)
        {
            board[i][j] = ' ';
        }
    }   
}
void DisPlayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
            {
                printf("|");
            }
            printf("\n");
            if (i < row - 1)
            {
                int j = 0;
                for ( j = 0; j <col; j++)
                {
                    printf("---");
                    if(j<col-1)
                    printf("|");
                }
                printf("\n");
            }

        }

    }

}
void game()
{
    char board[ROW][COL] = {0};
    InitBoard(board,ROW,COL);
    DisPlayBoard(board,ROW,COL);
}

void test()
{
    int input = 0;
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("输入错误,请重试\n");
            break;
        }
    } 
    while (input);
    
}
int main()
{
    test();
    return 0;
}