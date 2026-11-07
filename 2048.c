#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
void print(int gr[4][4])
{
    printf("\t\t-----------------------------------------2048--------------------------------------\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\t\t|   %d   ", gr[i][j]);
        }
        printf("\n\t\t----------------------------------------------------------------------------------\n");
    }
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
int move_up(int gr[4][4], int ref[4][4], int *score)
{
    
    int up = 0;
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
                *score += gr[i][k];
                gr[i + 1][k] = 0;
                ref[i][k] = 1;
                ref[i + 1][k] = 0;
            }
            if (gr[i + 1][k] != 0 && gr[i][k] != gr[i + 1][k] && gr[i][k] != 0)
            {
                up++;
            }
            else
            {
                up = 0;
            }
        }
    }
    return up;
}
int move_down(int gr[4][4], int ref[4][4], int *score)
{
    int down = 0;
    // -----------------------------------------------------compression slot down--------------------------------------------------
    for (int k = 0; k < 4; k++)
    {
        for (int i = 3; i > 0; i--)
        {
            for (int m = 0; m < 4; m++)
            {
                if (i - m <= -1 && i - 1 >= 0)
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
            }
        }
    }
    // --------------------merge slot below------------------------------------------------------
    for (int k = 0; k < 4; k++)
    {
        for (int i = 3; i > 0; i--)
        {
            if (gr[i][k] == gr[i - 1][k] && gr[i][k] != 0)
            {
                gr[i][k] = 2 * (gr[i - 1][k]);
                *score = *score + gr[i][k];
                gr[i - 1][k] = 0;
                ref[i][k] = 1;
                ref[i - 1][k] = 0;
            }
            if (gr[i + 1][k] != 0 && gr[i][k] != gr[i + 1][k] && gr[i][k] != 0)
            {
                down++;
            }
            else
            {
                down = 0;
            }
        }
    }
    return down;
}
int move_right(int gr[4][4], int ref[4][4], int *score)
{
    int right = 0;
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
                *score = *score + gr[k][i + 1];
                ref[k][i + 1] = 1;
                gr[k][i] = 0;
                ref[k][i] = 0;
            }
            if (gr[i + 1][k] != 0 && gr[i][k] != gr[i + 1][k] && gr[i][k] != 0)
            {
                right++;
            }
            else
            {
                right = 0;
            }
        }
    }
    return right;
}
int move_left(int gr[4][4], int ref[4][4], int *score)
{
    int left = 0;
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
            if (gr[k][i + 1] == gr[k][i] && gr[k][i] != 0)
            {
                gr[k][i] = 2 * (gr[k][i + 1]);
                *score = *score + gr[k][i];
                ref[k][i] = 1;
                gr[k][i + 1] = 0;
                ref[k][i + 1] = 0;
            }
            if (gr[i + 1][k] != 0 && gr[i][k] != gr[i + 1][k] && gr[i][k] != 0)
            {
                left++;
            }
            else
            {
                left = 0;
            }
        }
    }
    return left;
}
int main()
{
    int score = 0;
    int r = 0, l = 0, d = 0, u = 0;
    srand(time(0));
    int grid[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    int check[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    int rlol, x, y;
    while (1)
    {
        gen(grid, check);
        print(grid);
        printf("select your move->\n 1.Move Up(W)\t2.Move Right(D)\t3.Move Left(A)\t4.Move Down(S)\n press any other key to EXIT\n");
        char move;
        scanf(" %c", &move);
        if (move != 'a' && move != 'A' && move != 's' && move != 'S' && move != 'D' && move != 'd' && move != 'w' && move != 'W')
        {
            break;
        }
        else if (move == 'a' || move == 'A')
        {
            l = move_left(grid, check, &score);
            printf("your score -> %d\n", score);
        }
        else if (move == 's' || move == 'S')
        {
            d = move_down(grid, check, &score);
            printf("your score -> %d\n", score);
        }
        else if (move == 'w' || move == 'W')
        {
            u = move_up(grid, check, &score);
            printf("your score -> %d\n", score);
        }
        else if (move == 'd' || move == 'D')
        {
            r = move_right(grid, check, &score);
            printf("your score -> %d\n", score);
        }
        if (l == 4 || d == 4 || u == 4 || r == 4)
        {
            printf("GAME OVER!!!\n");
            exit(0);
        }
    }

    return 0;
}
