#include <stdio.h>
#include <stdlib.h>


struct stack {
    int size;
    int top;
    char * arr;
};


int is_empty(struct stack * ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int is_full(struct stack * ptr)
{
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}


void push_data(struct stack * ptr, char value)
{
    if (is_full(ptr))
    {
        printf("Stack Overflow cannont insert %c \n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }

    
}

char pop_data(struct stack * ptr)
{
    if (is_empty(ptr))
    {
        printf("Stack is Underflow..\n");
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }  
}



int match_parenth(char a, char value)
{
    if (value == ')' && a == '(')
    {
        return 1;
    }
    if (value == '}' && a == '{')
    {
        return 1;
    }
    if (value == ']' && a == '[')
    {
        return 1;
    }
    return 0;
}


int check_parenthesis(char * exp)
{
    // create stack
    struct stack * stack_data;
    stack_data->size = 100;
    stack_data->top = -1;
    stack_data->arr = (char *) malloc(stack_data->size * sizeof(char));
    char pop_value;
    printf("STack created and Intialized...\n");
    printf("Check IS_empty : %d\n", is_empty(stack_data));
    printf("Check IS_full : %d\n", is_full(stack_data));


    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            printf("%c\n", exp[i]);
            push_data(stack_data, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            pop_value = pop_data(stack_data);
            if (!match_parenth(pop_value, exp[i]))
            {
                return 0;
            }
        }
    }
    if (is_empty(stack_data))
    {
        return 1;
    }
    return 0;
}


int main()
{
    // char * expression = "45*([3+{4/6})";
    char * expression = "((8){(9-8))";
    if (check_parenthesis(expression))
    {
        printf("Matching..\n");
    }
    else
    {
        printf("Parenthesis Not Matching..\n");
    }
}
