#include <stdio.h>
#include <stdlib.h>



struct stack {
    int size;
    int top;
    int * arr; // integer pointer to allot memory dynamically
};


int is_empty(struct stack * ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_full(struct stack * ptr)
{
    if (ptr->size -1 == ptr->top)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void push_stack(struct stack * ptr, int value)
{
    if (is_full(ptr))
    {
        printf("Stack Overflow, Cannont push %d in stack.\n", value);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop_stack(struct stack * ptr)
{
    if (is_empty(ptr))
    {
        printf("Stack Underflow..\n");
        return -1;
    }
    else{
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}


int peep_stack(struct stack * ptr, int i)
{
    if (ptr->top-i+1 < 0)
    {
        return -1;
    }
    else
    {
        return ptr->arr[ptr->top-i+1];
    }

}


void traversal(struct stack * ptr)
{
    for (int i = 1; i<=ptr->top+1; i++)
    {
        printf("The element at %d, is %d \n", i, peep_stack(ptr, i));
    }
}


int main ()
{
    // struct stack * s; // structure pointer  stores address of structure which we have created above
    struct stack * s = (struct stack *) malloc(sizeof(struct stack)); // this allots a dynamic instance for our stack
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack is successfully Created\n");

    printf("BEFORE PUSHING, EMPTY :  %d\n", is_empty(s));
    printf("BEFORE PUSHING, Full : %d\n", is_full(s));

    printf("POP LAST ELEMENT %d\n", pop_stack(s));

    push_stack(s, 7);
    push_stack(s, 12);
    push_stack(s, 4);
    push_stack(s, 1);
    push_stack(s, 3);
    push_stack(s, 5);
    push_stack(s, 9);
    push_stack(s, 6);
    push_stack(s, 8);
    push_stack(s, 10); // pushed upto 10 values
    push_stack(s, 17); // OVERFLOW STATEMENT
    printf("AFTER PUSHING, EMPTY :  %d\n", is_empty(s));
    printf("AFTER PUSHING, Full : %d\n", is_full(s));
    // printf("POP LAST ELEMENT %d\n", pop_stack(s));
    // printf("POP LAST ELEMENT %d\n", pop_stack(s));
    // printf("POP LAST ELEMENT %d\n", pop_stack(s));
    // printf("POP LAST ELEMENT %d\n", pop_stack(s));

    // printf("peek value is %d", peep_stack(s, 3));
    traversal(s);

}

