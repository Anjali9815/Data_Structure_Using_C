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
        printf("elements : %d , %d\n", ptr, ptr->data);
        ptr = ptr->next;
        printf("After elements : %d\n", ptr);
    }
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
}