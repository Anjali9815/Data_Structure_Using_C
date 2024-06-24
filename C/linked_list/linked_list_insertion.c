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


struct node * insertion_at_first(struct node * head, int data)
{
    struct node * new_node;
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    return new_node;
}

struct node * insertion_mid(struct node *head, int value, int index)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;
    while (i != index)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    ptr->data = p->data;
    p->next = ptr;
    p->data = value;
    return head;
}


struct node * insertion_end(struct node * head, int value)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    ptr->data = value;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}


struct node * insertion_at_node(struct node * head, int value, struct node * gn)
{
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = value;
    ptr->next = gn->next;
    gn->next = ptr;
    return head;
}


int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    //  allocate the memory in heap
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    fourth = (struct node *) malloc(sizeof(struct node));
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
    fourth ->next = NULL;


    linked_list_traversal(head);
    printf("INSERT AT START \n");

    head = insertion_at_first(head, 23);
    linked_list_traversal(head);

    printf("INSERT AT Given INDEX \n");
    head = insertion_mid(head, 78, 3);
    linked_list_traversal(head);

    printf("INSERT AT END \n");
    head = insertion_end(head, 89);
    linked_list_traversal(head);

    printf("INSERT AT THE GIVEN NODE \n");
    head = insertion_at_node(head, 1000, third);
    linked_list_traversal(head);

}