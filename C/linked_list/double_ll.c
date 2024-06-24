#include <stdio.h>
#include <stdlib.h>


struct node {
    struct node * prev;
    int data;
    struct node * next;
};


void transversal_LL(struct node * head)
{
    struct node * p = head;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}


void transversal_LL_reverse(struct node * last)
{
    struct node * p = last;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->prev;
    }
}



int main ()
{
    struct node * head = (struct node *) malloc(sizeof(struct node));
    struct node * second = (struct node *) malloc(sizeof(struct node));
    struct node * third = (struct node *) malloc(sizeof(struct node));
    struct node * fourth = (struct node *) malloc(sizeof(struct node));
    struct node * fifth = (struct node *) malloc(sizeof(struct node));
    struct node * sixth = (struct node *) malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 12;
    head->next = second;

    second->prev = head;
    second->data = 3;
    second->next = third;

    third->prev = second;
    third->data = 4;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 6;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->data = 99;
    fifth->next = sixth;

    sixth->prev = fifth;
    sixth->data = 14;
    sixth->next = NULL;

    transversal_LL(head);
    printf("reverse linked list...\n");
    transversal_LL_reverse(sixth);

}

