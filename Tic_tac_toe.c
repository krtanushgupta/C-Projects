#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("\t\t\t\ttic tac toe\n");
    char E = 'E';
    int z = 1;
    int check = 0;
    char set[3][3] = {{45, 45, 45}, {45, 45, 45}, {45, 45, 45}};
    int x, y;
    int cx, cy;
    do
    {
        printf("enter x and y coordinate\n");
                                              // person is always !!0000000!!
        scanf("%d\n", &x);
        scanf("%d", &y);
        x--;
        y--;
        if (set[x][y] != 'O' && set[x][y] != 'X')
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (x == i && y == j)
                    {
                        set[i][j] = 'O';
                    }
                }
            }
            if (set[1][1] != 'O' && set[1][1] != 'X')
            {
                set[1][1] = 'X';
            }
            else if (set[1][1] == 'O' && set[0][2] != 'X')
            {
                set[0][2] = 'X';
            }
            else if(set[0][2]!='O'&&set[0][2]!='X'){set[0][2]='X';}
            else if(set[0][1]!='O'&&set[0][1]!='X'){set[0][1]='X';}
            else if(set[0][0]=='O'&&set[0][1]!='X'&&set[0][2]=='O'){set[0][1]='X';}
            else if(set[0][1]=='O'&&set[0][0]=='O'&&set[0][2]!='X'&&set[0][2]!='O'){set[0][2]='X';}
            else if(set[1][1]=='O'&&set[1][0]=='O'&&set[1][2]!='X'&&set[1][2]!='O'){set[1][2]='X';}
            else if(set[2][1]=='O'&&set[2][0]=='O'&&set[2][2]!='X'&&set[2][2]!='O'){set[2][2]='X';}
            else if(set[0][2]=='O'&&set[1][2]!='X'&&set[1][2]!='O'){set[1][2]='X';}
            else if(set[0][0]=='O'&&set[2][2]!='X'&&set[2][2]!='O'){set[2][2]='X';}
            else if(set[1][0]=='O'&&set[1][2]=='O'&&set[1][1]!='X'){set[1][1]='X';}
            else if(set[1][0]=='O'&&set[1][1]=='O'&&set[1][2]!='X'){set[1][2]='X';}
            else if(set[2][2]=='O'&&set[0][1]!='X'&&set[0][1]!='O'){set[0][1]='X';}
            else if(set[2][2]=='O'&&set[0][0]!='X'&&set[0][0]!='O'){set[0][0]='X';}
            else if(set[1][0]=='O'&&set[1][2]!='X'&&set[1][2]!='O'){set[1][2]='X';}
            else if(set[2][1]=='O'&&set[0][1]!='X'&&set[0][1]!='O'){set[0][1]='X';}
            else if(set[0][1]=='O'&&set[0][2]!='X'&&set[0][2]!='O'){set[0][2]='X';}
            else if(set[0][1]=='O'&&set[0][2]!='X'&&set[0][2]!='O'){set[0][2]='X';}
            else if(set[1][1]=='O'&&set[0][2]!='X'&&set[0][2]!='O'){set[0][2]='X';}
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    char t = set[j][i];
                    printf("\t\t\t\t%c ", t);
                    if (j == 2)
                    {
                        printf("\n");
                    }
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int n = 0; n < 3; n++)
                {
                    if( set[i][n] == 'O' && set[i + 1][n] == 'O' && set[i + 2][n] == 'O'){check=1;}
                    else if( set[i][n] == 'X' && set[i + 1][n] == 'X' && set[i + 2][n] == 'X'){check=1;}
                }
                if(set[i][0]=='O'&&set[i][1]=='O'&&set[i][2]=='O'){check=1;}
                if(set[i][0]=='X'&&set[i][1]=='X'&&set[i][2]=='X'){check=1;}
            }
                                    // DIAGONALS!!
            if (set[0][0]=='X'&&set[1][1]=='X'&&set[2][2]=='X'){check =1;}
            else if(set[0][0]=='O'&&set[1][1]=='O'&&set[2][2]=='O'){check=1;}
            else if(set[0][2]=='O'&&set[1][1]=='O'&&set[2][0]=='O'){check=1;}
            else if(set[0][2]=='X'&&set[1][1]=='X'&&set[2][0]=='X'){check=1;}
        }
        else
        {
            printf("!!!be cautious!!!\n");
        }
    } while (check == 0);
    return 0;

}
