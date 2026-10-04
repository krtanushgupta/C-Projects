#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
typedef struct deck
{
    int value;
    char type[90];
    char race[55];

} deck;
typedef struct player
{
    int value;
    char type[55];
    char race[55];
} player;
typedef struct dealer
{
    int value;
    char type[55];
    char race[55];
} dealer;

int main()
{
    int bust = 0, ah = 0, bh = 0;
    int dealer_count = 0, player_count = 0;
    int x = 0, y = 0, a = 0, b = 0;
    srand(time(0));

    x = rand() % 13;
    y = rand() % 4;

    deck set[4][13];

    int uset[4][13] = {0};
    for (int i = 0; i < 13; i++)
    {
        deck *ptr;
        for (int j = 0; j < 4; j++)
        {
            ptr = &set[j][i];
            if (j == 0)
            {
                strcpy(ptr->type, " ");
                strcpy(ptr->race, "Diamond");
            }
            else if (j == 1)
            {
                strcpy(ptr->race, "Heart");
                strcpy(ptr->type, " ");
            }
            else if (j == 2)
            {
                strcpy(ptr->type, " ");
                strcpy(ptr->race, "Spade");
            }
            else if (j == 3)
            {
                strcpy(ptr->type, " ");
                strcpy(ptr->race, "Club");
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
    dealer_count = pdr->value + dealer_count;
    uset[b][a] = 1;

    strcpy(pdr->type, set[b][a].type);
    strcpy(pdr->race, set[b][a].race);

    while (bust == 0)
    {
        if (uset[y][x] == 1)
        {
            x = rand() % 13;
            y = rand() % 4;
        }
        x = rand() % 13;
        y = rand() % 4;
        ch->value = set[y][x].value;
        strcpy(ch->type, set[y][x].type);
        strcpy(ch->race, set[y][x].race);
        player_count = player_count + ch->value;
        uset[y][x] = 1;
        printf("------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\t The dealer has one card down and other card is a %s value %d , %s\n", pdr->race, pdr->value, pdr->type);
        printf("Your card is %s of value %d ,%s\n", ch->race, ch->value, ch->type);

        printf("Player count %d and dealer count %d\n", player_count, dealer_count);
        printf("Select 1.Hit\n2.Stay\n");
        int choice;
        scanf("%d", &choice);
        if (player_count > 21)
        {
            printf("Bust!! u lose\n");
            bust = 1;
            break;
        }
        if (choice == 1)
        {
            x = rand() % 13;
            y = rand() % 4;
            if (uset[y][x] == 1)
            {
                x = rand() % 13;
                y = rand() % 4;
            }
            ch->value = set[y][x].value;
            strcpy(ch->type, set[y][x].type);
            strcpy(ch->race, set[y][x].race);
            uset[y][x] = 1;
            if (player_count > 21 && dealer_count < 21)
            {
                bust = 1;
                printf("You got Busted !!! ---__---\n");
            }
        }
        else if (choice == 2)
        {
            if (player_count > 21)
            {
                printf("Bust!! u lose\n");
                bust = 1;
                break;
            }
            a = (rand()) % 13;
            b = (rand()) % 4;
            if (uset[b][a] == 1)
            {
                a = rand() % 13;
                b = (rand()) % 4;
            }
            uset[b][a] = 1;
            strcpy(pdr->type, set[b][a].type);
            strcpy(pdr->race, set[b][a].race);
            dealer_count = dealer_count + pdr->value;
            printf("dealers count %d\n", dealer_count);
            printf("The dealer's down card was %s of value %d ,%s\n", pdr->race, pdr->value, pdr->type);
        }
        if (dealer_count < 17 && choice == 2)
        {
            a = rand() % 13;
            b = rand() % 4;
            if (uset[b][a] == 1)
            {
                a = rand() % 13;
                b = (rand()) % 4;
            }
            pdr->value = set[b][a].value;
            dealer_count = pdr->value + dealer_count;
            strcpy(pdr->type, set[b][a].type);
            strcpy(pdr->race, set[b][a].race);
            printf("The dealer draws another card which is a %s and value %d ,%s\n", pdr->race, pdr->value, pdr->type);
            printf("Dealers count is %d\n", dealer_count);
        }
        if (dealer_count > 21)
        {
            printf("You win dealer got busted!! --__--!!\n");
            bust = 1;
            break;
        }
        if (dealer_count == player_count)
        {
            printf("push/tie\n");
            bust = 1;
            break;
        }

        else if (dealer_count > player_count && choice == 2)
        {
            printf("You lose!! dealer has higher value than you\n");
            bust = 1;
            break;
        }
        else if (dealer_count < player_count && choice == 2)
        {
            printf("You win!!!\n");
            bust = 1;
            break;
        }

        else if (choice > 2)
        {
            break;
        }
    }
    free(pdr);
    free(ch);
    return 0;
}
