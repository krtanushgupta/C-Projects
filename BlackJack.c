#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
typedef struct deck
{
    int value;
    char type[90]; /*heart, spade,club,diamond*/

} deck;
typedef struct player
{
    int value;
    char type[90];
} player;
typedef struct dealer
{
    int value;
    char type[90];
} dealer;

int main()
{
    int bust = 0;
    int dealer_count = 0, player_count = 0, dealer_c = 0;
    int x = 0, y = 0, a = 0, b = 0;
    srand(time(0));

    x = rand() % 13;
    y = rand() % 4;

    deck set[4][13];
    for (int i = 0; i < 13; i++)
    {
        deck *ptr;
        for (int j = 0; j < 4; j++)
        {
            ptr = &set[j][i];
            if (j == 0)
            {
                strcpy(ptr->type, "Diamond");
            }
            else if (j == 1)
            {
                strcpy(ptr->type, "Heart");
            }
            else if (j == 2)
            {
                strcpy(ptr->type, "Spade");
            }
            else if (j == 3)
            {
                strcpy(ptr->type, "Club");
            }
            ptr = &set[j][i];
            ptr->value = i + 1;
            if (i == 10)
            {
                ptr->value = 10;
                strcpy(ptr->type, "King");
            }
            else if (i == 11)
            {
                ptr->value = 10;
                strcpy(ptr->type, "Queen");
            }
            else if (i == 12)
            {
                ptr->value = 10;
                strcpy(ptr->type, "Jack");
            }
        }
    }
    dealer *pdr;
    player *ch;
    ch = calloc(1, sizeof(player));
    pdr = calloc(1, sizeof(dealer));
    a = rand() % 13;
    b = (rand()) % 4;
    pdr->value = set[b][a].value;
    strcpy(pdr->type, set[b][a].type);
    a = (rand()) % 13;
    b = (rand()) % 4;
    pdr->value = set[b][a].value;
    dealer_count = pdr->value;
    while (bust == 0)
    {
        x = (rand()) % 13;
        y = rand() % 4;
        ch->value = set[y][x].value;
        strcpy(ch->type, set[y][x].type);
        printf("your card is a %s and number %d\n", ch->type, ch->value);
        player_count = ch->value + player_count;
        dealer_count = pdr->value;
        strcpy(pdr->type, set[b][a].type);
        printf("\t\t The DEALER has 1 down and other is a %s of number %d\n", pdr->type, pdr->value);
        printf("player count %d dealer count %d\n", player_count, dealer_count);
        printf("1.hit\n2.Stay\n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1)
        {
            if (player_count >=21)
            {
                printf("BUST!! u lose!! -_-^!!   !!!!\n");
                bust = 1;
                printf("player count %d\n", player_count);
                break;
            }
            x = (rand()) % 13;
            y = (rand()) % 4;
            ch->value = set[y][x].value;
            strcpy(ch->type, set[y][x].type);
            printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
        }
        else if (choice == 2)
        {
            a = (rand()) % 13;
            b = (rand()) % 4;
            pdr->value = set[b][a].value;
            dealer_count+=pdr->value;
            printf("\t\tTHE DEALER'S DOWN CARD WAS A %s of value %d\n", pdr->type, pdr->value);
            if (player_count >=21)
            {
                printf("%d player total\n", player_count);
                bust = 1;
                break;
            }
            printf("-----------------------------------------------------------------------------------------------------------------------\n");
        }
        else if (choice > 2)
        {
            printf("player count %d\n", player_count);
            break;
        }
        if (dealer_count < 16 && choice == 2)
        {

            x = (rand()) % 13;
            y = (rand()) % 4;
            pdr->value = set[b][a].value;
            dealer_count+=pdr->value;
            strcpy(pdr->type, set[b][a].type);
            printf("dealer took another card it is a %s and value %d\n", pdr->type, pdr->value);
        }

        else if ((dealer_count >=21 && choice == 2) && (player_count < 21 && dealer_count > 17))
        {
            printf("BUST!! u WIN!!! U_U\n");
            bust = 1;
            printf("player count %d\ndealer count is %d", player_count, dealer_count);
            break;
        }
        if (dealer_count > player_count && choice == 2)
        {
            printf("!! u lose!! -_-^!\n");
            bust = 1;
            printf("player count %d dealer count %d\n", player_count, dealer_count);
            break;
        }
        else if (dealer_count < player_count && player_count < 21 && dealer_count < 21 && choice == 2)
        {
            printf("!! u win!! -_-^!\n");
            bust = 1;
            printf("player count %d dealer count %d\n", player_count, dealer_count);
            break;
        }
        if (player_count >=21)
        {
            printf("BUST!! u lose!! -_-^!!   !!!!\n");
            bust = 1;
            printf("player count %d dealer count %d\n", player_count, dealer_count);
            break;
        }
    }
    free(pdr);
    free(ch);
    return 0;
}
