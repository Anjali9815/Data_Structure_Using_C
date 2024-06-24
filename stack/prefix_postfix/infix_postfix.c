#include <stdio.h>
#include <stdlib.h>


struct stack {
    int size;
    int top;
    char * arr;
};

int precedence_order(char value)
{
    if (value == '+' || value == '-')
    {
        return 0;
    }
    if (value == '*' || value == '/')
    {
        return 1;
    }
}

int is_full(struct stack * ptr)
{
    if (ptr->size-1 == ptr->top)
    {
        return 1;
    }
    return 0;
}

int is_empty(struct stack * ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

void push_data(struct stack * ptr, char value)
{
    if (is_full(ptr))
    {
        printf("stack overflow can't insert %d value\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pull_data(struct stack * ptr)
{
    if (is_empty(ptr))
    {
        printf("Satck Underflow\n");
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}






