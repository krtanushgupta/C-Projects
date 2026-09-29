#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
int main()
{
    // a or head

    printf("linked list functions\n");
    node *a;
    node *b;
    node *c;
    node *d;
    node *start;
    start = malloc(sizeof(node));
    a = malloc(sizeof(node));
    b = malloc(sizeof(node));
    c = malloc(sizeof(node));
    d = malloc(sizeof(node));
    start->next=a;
    a->data = 1;
    a->next = b;
    b->data = 7;
    b->next = c;
    c->data = 72;
    c->next = d;
    d->data = 7778;
    d->next = NULL;
    printf("1.printing linked list\n2.adding an element \n3.deletion of element\n\n");
    node *lol;
    lol = malloc(sizeof(node));
    node *u;
    u = malloc(sizeof(node));
    node *top;
    top = malloc(sizeof(node));
    int choice;
    scanf("%d", &choice);
    node *temp;
    temp = malloc(sizeof(node));
    node *ptr;
    ptr = malloc(sizeof(node));
    if (choice == 1)
    {
        ptr = a;
        while (ptr != NULL)
        {
            temp = ptr;
            printf("%d\t", ptr->data);
            free(ptr);
            ptr = temp->next;
        }
    }
    else if (choice == 2)
    {
        printf("enter value of element\n");
        int v;
        scanf("%d", &v);
        printf("enter position to add %d\n", v);
        int pos;
        scanf("%d", &pos);
        node *k;
        k = malloc(sizeof(node));
        node *p;
        p = malloc(sizeof(node));
        p->data = v;
        ptr = a;
        for (int i = 1; i < 6; i++)
        {
            if (pos - 1 == i)
            {
                k = ptr->next;
                ptr->next = p;
                p->next = k;
            }
            ptr = ptr->next;
        }
        ptr = a;
        while (ptr != NULL)
        {
            k = ptr->next;
            printf("%d\t", ptr->data);
            ptr = k;
        }
    }
    else if (choice == 3)
    {
        printf("1.Delete via position \n2.Delete via selecting node\n");
        int kh;
        scanf("%d", &kh);
        if (kh == 1)
        {
            printf("enter position\n");
            int pq;
            scanf("%d", &pq);
            lol = a;
            for (int i = 1; i < 5; i++)
            {
                if (pq == 1)
                {
                    start->next=b;
                    free(a);
                }
                if (pq - 1 == i)
                {
                    top = lol->next;
                    lol->next = top->next;
                }
                lol = lol->next;
                if (lol == NULL)
                {
                    break;
                }
            }

            u = start->next;
            while (u != NULL)
            {
                printf("%d\t", u->data);
                u = u->next;
            }
            free(u);
            free(lol);
            free(top);

            // ikn ikn its shitty way it needs to be spontaneous will work on it after completing!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        }
        if (kh == 2)
        {
            printf("enter value of node\n");
            int vae;
            scanf("%d", &vae);
            lol = a;
            int pte;
            for (int i = 1; i < 5; i++)
            {
                if (lol->data == vae)
                {
                    pte = i;
                    printf("position is %d\n", i);
                    break;
                }
                lol = lol->next;
                if (lol == NULL)
                {
                    break;
                }
            }
            free(lol);
            lol = a;
            for (int i = 1; i < 5; i++)
            {
                if (pte - 1 == i)
                {
                    node *top;
                    top = malloc(sizeof(node));
                    top = lol->next;
                    free(lol->next);
                    lol->next = top->next;
                }
                lol = lol->next;
                if (lol == NULL)
                {
                    break;
                }
            }
            free(lol);
            u = start->next;
            while (u != NULL)
            {
                printf("%d\t", u->data);
                u = u->next;
            }
        }
    }
    return 0;
}
