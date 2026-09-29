#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
typedef struct game{
    int c;
    char options[100];
}opt;
int main()
{
    int x;
    srand(time(0));
    x = rand() % 3 + 1;
    int choice;
    int l=0;
    opt set[3];
    opt*ptr;
    strcpy("set[0].options","rock");
    strcpy("set[1].options","paper");
    strcpy("set[2].options","scissor");
    printf("\t\t\t\tBasic game(rather shity game)\n enter your number\n1.rock\n2.paper\n3.scissor\n");
    scanf("%d", &choice);
    for (int i = 0; i < 2; i++)
    {
        ptr=&set[i];
        if (choice==i+1)
        {
            printf("your choice is %s\n",ptr->options);
        }

    }
    FILE *pt;
    pt = fopen("ghis.txt", "a");
    fprintf(pt, "%d\n", choice);
    do
    {
         int b=0;
         b++;
        if (choice - 1 == x&&choice!=1)
        {
            printf("you won\n");
            printf("%d times took u\n",b);
            l = 1;
            continue;
            break;
        }
        else if(choice==1&&x==3){
            printf("u won\n");
            break;
        }
        else
        {
            printf("\nnope\n");
            printf("loser u lost %d times\n",b);
            continue;
        }
    }while (l == 1);
    printf("%d\n", x);
    return 0;
}
