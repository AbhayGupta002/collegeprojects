// doubly linked list 
#include <stdio.h>
#include <stdlib.h>
struct list
{
    int data;
    struct list *next;
    struct lidt *prev;
};
void main()
{
    struct list *front = NULL, *p = NULL, *node = NULL , *back = NULL;
    int n = 1, k;
    while (n != 0)
    {
         node = (struct list*)malloc(sizeof(struct list));
        printf("\n enter element:");
        scanf("%d", &k);
        node->data = k;
        node->next = NULL;
        node->prev = NULL;
        if (front == NULL)
        {
            front = node;
            p = node;
            back = node;
        }
        else
        {
            p->next = node;
            node->prev = p;
            p = node;
            //
            back ->next = node;
            node->prev=back;
            back = node;
        }
        printf("\n for stop enter 0 otherwise for enter element press 1:");
        scanf("%d", &n);
    }
    p = front;
    printf("\n display list frontend ->\n");
    while (p != NULL)
    {
        printf("\n%d", p->data);
        p = p->next;
    }
    p=back;
    printf("\n display list backend se ->\n");
    while ( p != NULL)
    {
        printf("\n %d", p->data);
        p=p->prev;
    }
    
}
