#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
void print(int gr[4][4], int c)
{
    printf("------------2048-----------\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("|   %d   ", gr[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("%d\n", c);
}
void gen(int g[4][4], int c[4][4])
{
    int x, y, rlol;
    rlol = rand();
    x = rand() % 4;
    y = rand() % 4;
    while (c[x][y] == 1)
    {
        x = rand() % 4;
        y = rand() % 4;
    }
    g[x][y] = (((rlol % 5 + 1) / 5) > 0) ? 4 : 2;
    c[x][y] = 1;
}
void move_up(int gr[4][4], int ref[4][4])
{
    // -----------------------------------------------------compression slot down--------------------------------------------------
    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int m = 1; m < 4; m++)
            {
                if (i + m > 3)
                {
                    continue;
                }
                if (gr[i][k] == 0 && gr[i + m][k] != 0)
                {
                    gr[i][k] = gr[i + m][k];
                    gr[i + m][k] = 0;
                    ref[i][k] = 1;
                    ref[i + m][k] = 0;
                }
                // --------------------------------------------------------attempted comp+merge slot down-------------------------------------
                if (gr[i + 1][k] == gr[i][k] && gr[i][k] != 0)
                {
                    gr[i][k] = 2 * (gr[i + 1][k]);
                    gr[i + 1][k] = 0;
                    ref[i][k] = 1;
                    ref[i + 1][k] = 0;
                }
            }
        }
    }
    // ---------------------------------------------------------- only merge slot down-----------------------------------------
    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (gr[i + 1][k] == gr[i][k] && gr[i][k] != 0)
            {
                gr[i][k] = 2 * (gr[i + 1][k]);
                gr[i + 1][k] = 0;
                ref[i][k] = 1;
                ref[i + 1][k] = 0;
            }
        }
    }
}
void move_down(int gr[4][4], int ref[4][4])
{
    // -----------------------------------------------------compression slot down--------------------------------------------------
    for (int k = 0; k < 4; k++)
    {
        for (int i = 3; i > -1; i--)
        {
            for (int m = 0; m < 4; m++)
            {
                if (i - m < 0)
                {
                    continue;
                }
                if (gr[i][k] == 0 && gr[i - m][k] != 0)
                {
                    gr[i][k] = gr[i - m][k];
                    gr[i - m][k] = 0;
                    ref[i - m][k] = 0;
                    ref[i][k] = 1;
                }
                // -------------------------------merge and compression slot down---------------------------------------
                if (gr[i][k] == gr[i - 1][k] && gr[i][k] != 0)
                {
                    gr[i][k] = 2 * (gr[i - 1][k]);
                    gr[i - 1][k] = 0;
                    ref[i][k] = 1;
                    ref[i - 1][k] = 0;
                }
            }
        }
    }
    // --------------------merge slot below------------------------------------------------------
    for (int k = 0; k < 4; k++)
    {
        for (int i = 3; i > -1; i--)
        {
            if (gr[i][k] == gr[i - 1][k] && gr[i][k] != 0)
            {
                gr[i][k] = 2 * (gr[i - 1][k]);
                gr[i - 1][k] = 0;
                ref[i][k] = 1;
                ref[i - 1][k] = 0;
            }
        }
    }
}
void move_right(int gr[4][4], int ref[4][4])
{
    for (int k = 3; k > -1; k--)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int m = 0; m < 4; m++)
            {
                if (i + m >= 4)
                {
                    continue;
                }
                if (gr[k][i] != 0 && gr[k][i + m] == 0)
                {
                    gr[k][i + m] = gr[k][i];
                    gr[k][i] = 0;
                    ref[k][i + m] = 1;
                    ref[k][i] = 0;
                }
            }
        }
    }
    for (int k = 3; k > -1; k--)
    {
        for (int i = 0; i < 3; i++)
        {
            if (gr[k][i + 1] == gr[k][i] && gr[k][i + 1] != 0)
            {
                gr[k][i + 1] = 2 * (gr[k][i]);
                ref[k][i + 1] = 1;
                gr[k][i] = 0;
                ref[k][i] = 0;
            }
        }
    }
}
void move_left(int gr[4][4], int ref[4][4])
{
    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int m = 0; m < 4; m++)
            {
                if (i + m >= 4)
                {
                    continue;
                }
                if (gr[k][i + m] != 0 && gr[k][i] == 0)
                {
                    gr[k][i] = gr[k][i + m];
                    ref[k][i] = 1;
                    gr[k][i + m] = 0;
                    ref[k][i + m] = 0;
                }
            }
        }
    }
    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (gr[k][i+1]==gr[k][i]&&gr[k][i]!=0)
            {
                gr[k][i]=2*(gr[k][i+1]);
                ref[k][i]=1;
                gr[k][i+1]=0;
                ref[k][i+1]=0;
            }
            
        }
        
    }
    
}
int main()
{
    srand(time(0));
    int grid[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    int check[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    int rlol, x, y, bust = 0, count = 0;
    printf("count=%d\n", count);
    while (1)
    {
        count++;
        gen(grid, check);
        print(grid, count);
        printf("select your move:-\n 1.Move Up(W)\t2.Move Right(D)\t3.Move Left(A)\t4.Move Down(S)\n");
        char move;
        scanf(" %c", &move);
        if (move != 'a' && move != 'A' && move != 's' && move != 'S' && move != 'D' && move != 'd' && move != 'w' && move != 'W')
        {
            break;
        }
        else if (move == 'a' || move == 'A')
        {
            move_left(grid, check);
        }
        else if (move == 's' || move == 'S')
        {
            move_down(grid, check);
        }
        else if (move == 'w' || move == 'W')
        {
            move_up(grid, check);
        }
        else if (move == 'd' || move == 'D')
        {
            move_right(grid, check);
        }
    }

    return 0;
}
