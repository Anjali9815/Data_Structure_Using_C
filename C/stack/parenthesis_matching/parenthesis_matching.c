#include <stdio.h>
#include <stdlib.h>

// creation of stack
struct stack{
    int size;
    int top;
    char * arr;
};


// checking if stack is empty or not
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

// checking if stack if overflow or not
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



void push_stack(struct stack * ptr, char value)
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


char pop_stack(struct stack * ptr)
{
    if (is_empty(ptr))
    {
        printf("Stack Underflow..\n");
        return -1;
    }
    else{
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}



int parenthesis_match(char * exp)
{
    struct stack * sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i =0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push_stack(sp, '(');   
        }
        else if (exp[i] == ')')
        {
            if (is_empty(sp))
            {
                return 0;
            }
            pop_stack(sp);
        }
    }
    if (is_empty(sp))
    {
        return 1;
    }
    return 0;
}



int main()
{
    char * exp = "3*8";

    if (parenthesis_match(exp))
    {
        printf("Parenthesis Is matching for the given Expression\n");
    }
    else
    {
        printf("Parenthesis Is Not matching for the given Expression\n");
    }
    return 0;
}

