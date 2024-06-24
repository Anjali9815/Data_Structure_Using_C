#include <stdio.h>
#include <stdlib.h>

struct stack {
        int size;
        int top;
        int * arr;
};


int is_empty(struct stack * ptr)
{
    if (ptr->top == -1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int is_full(struct stack * ptr)
{
    if (ptr->size -1 == ptr->top)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}


int main ()
{
    // implementation through stack 
    // struct stack s;
    // s.size = 10;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    // implementation through stack pointer structure 
    struct stack * s;
    s->size = 3;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    // // manually insertion of data
    s->arr[0] = 5;
    s->top++;
    s->arr[0] = 4;
    s->top++;





    // check stack is emty or not
    if (is_empty(s))
    {
        printf("STACK IS NOT EMPTY\n");
    }
    else
    {
        printf("Stack if Empty..\n");
    }
    if (is_full(s))
    {
        printf("STACK IS NOT FULL\n");
    }
    else
    {
        printf("STACK IS FULL \n");
    }

}