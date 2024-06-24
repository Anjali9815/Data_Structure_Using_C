#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    // this is a struct node type pointer and it will point to structur node
    struct node * next;
};

void linked_list_traversal(struct node * ptr)
{
    while (ptr != NULL)
    {
        printf("element are : %d\n", ptr->data);
        ptr = ptr->next;
    }
}


struct node * delete_at_first(struct node * head)
{
    struct node * p = head;
    head = head->next;
    free(p);
    return head;
}

struct node * deletion_mid(struct node *head, int index)
{
    struct node * p = head;
    struct node * previous;
    int i = 0;
    while (i != index)
    {   
        previous = p;
        previous->next = p->next;
        p = p->next;
        i++;
    }
    previous->next = p->next;
    free(p);
    return head;
}


struct node * Deletion_at_end(struct node * head)
{
    struct node * p = head;
    struct node * previous = head;
    while (p->next != NULL)
    {
        previous = p;
        previous->next = p->next;
        p = p->next;
    }
    previous->next = NULL;
    free(p);
    return head;

}


struct node * delete_at_node(struct node * head, int value, struct node * gn)
{
    struct node * ptr = head;
    struct node * q = head;
    while(ptr->data != value && ptr->next != NULL)
    {
        q = ptr;
        ptr = ptr->next;
    }
    q->next = ptr->next;
    free(ptr);
    return head;
}


int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    struct node * fifth;
    struct node * sixth;

    //  allocate the memory in heap
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    fourth = (struct node *) malloc(sizeof(struct node));
    fifth = (struct node *) malloc(sizeof(struct node));
    sixth = (struct node *) malloc(sizeof(struct node));
    // new_el = (struct node *) malloc(sizeof(struct node));

    // link head with second node
    head ->data = 7;
    head ->next = second;

    // link  second node with third node
    second ->data = 19;
    second ->next = third;
    
    // link  third node with fourth node
    third ->data = 21;
    third ->next = fourth;

    // link  third node and terminate
    fourth ->data = 56;
    fourth ->next = fifth;

    // link  third node and terminate
    fifth ->data = 39;
    fifth ->next = sixth;

    // link  third node and terminate
    sixth ->data = 8;
    sixth ->next = NULL;


    linked_list_traversal(head);
    printf("Deletion AT START \n");

    // head = delete_at_first(head);
    // linked_list_traversal(head);

    // printf("DELETE AT Given INDEX \n");
    // head = deletion_mid(head, 2);
    // linked_list_traversal(head);

    // printf("DELETE AT END \n");
    // head = Deletion_at_end(head);
    // linked_list_traversal(head);

    printf("INSERT AT THE GIVEN NODE \n");
    head = delete_at_node(head, 21, third);
    linked_list_traversal(head);

}