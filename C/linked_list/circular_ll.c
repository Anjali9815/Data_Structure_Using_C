#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node * next;
};




void transverse(struct node * head)
{
    struct node * ptr = head;
    // printf("element at %d is %d\n", ptr, ptr->data);
    // ptr = head->next;
    // while (ptr != head)
    // {
    //     printf("element at %d is %d\n", ptr, ptr->data);
    //     ptr = ptr->next;
    // }

    do
    {
        printf("elements are %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    
}



struct node * insertion_at_first(struct node * head, int value)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = value;

    struct node * p = head->next;
    // p = p->next;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return ptr;
}



struct node * insertion_at_index(struct node * head, int value, int index)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = value;
    struct node * p = head;

    int i = 1;
    while (i != index & p->next != head)
    {
        if (i == index)
            break;
        else
            p = p->next;
            i++;
        
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}


struct node * insertion_at_last(struct node * head, int value)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = value;

    struct node * p = head->next;
    // p = p->next;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}



int main()
{
    struct node * head = (struct node *) malloc(sizeof(struct node));
    struct node * second = (struct node *) malloc(sizeof(struct node));
    struct node * third = (struct node *) malloc(sizeof(struct node));
    struct node * fourth = (struct node *) malloc(sizeof(struct node));
    struct node * fifth = (struct node *) malloc(sizeof(struct node));

    head->data = 6;
    head->next = second;

    second->data = 14;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 11;
    fourth->next = fifth;

    fifth->data = 46;
    fifth->next = head;


    transverse(head);
    printf("Insertion at the begining...\n");
    head = insertion_at_first(head, 55);
    transverse(head);
    printf("Insertion at the END...\n");
    head = insertion_at_last(head, 77);
    transverse(head);
    printf("Insertion at the Index 3...\n");
    head = insertion_at_index(head, 33, 5);
    transverse(head);

}


