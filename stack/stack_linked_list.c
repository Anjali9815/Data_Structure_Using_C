#include <stdio.h>
#include <stdlib.h>


struct stack {
    int data;
    struct stack * next;
};


int is_empty(struct stack * ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_full(struct stack * p)
{
    struct stack * ptr = (struct stack *) malloc(sizeof(struct stack));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct stack* push_data(struct stack * ptr, int value)
{
    if (is_full(ptr))
    {
        printf("Stack Overflow..\n");
    }
    else
    {
        struct stack * n = (struct stack *) malloc(sizeof(struct stack));
        n->data = value;
        n->next = ptr;
        ptr = n;
        return ptr;
    }
}

int pop_data(struct stack ** ptr)
{
    if (is_empty(*ptr))
    {
        printf("Stack Underflow..\n");
    }
    else
    {
        struct stack * n = *ptr;
        *ptr = (*ptr)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek_data(struct stack * ptr, int position)
{
    for (int i = 0; (i<position && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}


int stack_top(struct stack * ptr)
{
    return ptr->data;
}

int stack_bottom(struct stack * ptr)
{
    struct stack * p = ptr;
    struct stack * prev;
    while (p!= NULL)
    {
        prev = p;
        p = p->next;
    }
    free(p);
    return prev->data;
}

void linked_list_traversal(struct stack * ptr)
{
    while (ptr != NULL)
    {
        printf("element are : %d\n", ptr->data);
        ptr = ptr->next;
    }
}


int main()
{
    struct stack * sp = NULL;

    sp = push_data(sp, 98);
    sp = push_data(sp, 10);
    sp = push_data(sp, 8);
    sp = push_data(sp, 16);
    sp = push_data(sp, 7);
    sp = push_data(sp, 3);
    sp = push_data(sp, 1);

    linked_list_traversal(sp);
    
    // & is used to point the address so whatever changes is done in pop function same will be reflected in the sp pointer directly.
    // or I can declare the sp as global variable so the changes will also reflected by using same name as gloval var
    int element = pop_data(&sp);
    printf("pop the last element %d\n", element);
    element = pop_data(&sp);
    printf("pop the last element %d\n", element);
    element = pop_data(&sp);
    printf("pop the last element %d\n", element);

    printf("peek value for 3 is %d \n",peek_data(sp, 3));
    printf("peek value for 2 is %d \n",peek_data(sp, 2));
    printf("peek value for 1 is %d \n",peek_data(sp, 1));

    // stack_top and stack_bottom
    printf("stack top is %d\n", stack_top(sp));
    printf("stack bottom is %d\n", stack_bottom(sp));


}

