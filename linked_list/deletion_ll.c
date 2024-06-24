#include <stdio.h>
#include <stdlib.h>



struct node {
    int data;
    struct node * next;
};


void transverse_circular_ll(struct node * head)
{
    struct node * ptr = head;
    while(ptr->next!= head)
    {
        printf("Elements are %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("Elements are %d\n", ptr->data);
}




struct node * deletion_at_start(struct node * head)
{
    struct node * ptr = head;
    struct node * previous = head; 
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = previous->next;
    free(previous);
    return ptr;
}


struct node * deletion_at_start(struct node * head)
{
    struct node * ptr = head;
    struct node * previous = head; 
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = previous->next;
    free(previous);
    return ptr;
}




int main()
{
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *) malloc(sizeof(struct node));
    struct node * third = (struct node *) malloc(sizeof(struct node));
    struct node * fourth = (struct node *) malloc(sizeof(struct node));
    struct node * fifth = (struct node *) malloc(sizeof(struct node));


    head->data = 6;
    head->next = second;

    second->data =3;
    second->next = third;

    third->data = 11;
    third->next = fourth;

    fourth->data = 18;
    fourth->next = fifth;

    fifth->data = 31;
    fifth->next = head;


    transverse_circular_ll(head);
    printf("Deletion at the first\n");
    head = deletion_at_start(head);
    transverse_circular_ll(head);

}


