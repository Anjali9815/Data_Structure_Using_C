#include <stdio.h>
#include <stdlib.h>

struct queue{
    int start;
    int top;
    int * arr;
    int size;
};

int is_full(struct queue * ptr)
{
    if (ptr->size-1 == ptr->top)
    {
        return 1;
    }
    return 0;
}

int is_empty(struct queue * ptr)
{
    if (ptr->start == ptr->top)
    {
        return 1;
    }
    return 0;
}

void enqueue_data(struct queue * ptr, int value)
{
    if (is_full(ptr))
    {
        printf("Queue overflow Cannot insert %d value\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}


int dequeue_data(struct queue * ptr)
{
    int a = -1;
    if (is_empty(ptr))
    {
        printf("Queue is Empty..\n");
        return 1;
    }
    else
    {
        ptr->start++;
        a = ptr->arr[ptr->start];
    }
    return a;
}


int main()
{
    struct queue sp;
    sp.size = 10;
    sp.start = -1;
    sp.top = -1;
    sp.arr = (int *) malloc(sp.size * sizeof(int));
    printf("Queue is Empty %d\n", is_empty(&sp));
    printf("Queue is Full %d\n", is_full(&sp));

    enqueue_data(&sp, 9);
    enqueue_data(&sp, 3);
    enqueue_data(&sp, 1);
    enqueue_data(&sp, 5);
    enqueue_data(&sp, 8);
    enqueue_data(&sp, 6);
    enqueue_data(&sp, 11);
    enqueue_data(&sp, 15);
    enqueue_data(&sp, 21);
    enqueue_data(&sp, 19);
    enqueue_data(&sp, 34);
    enqueue_data(&sp, 55);

    printf("Dequeue elemenet %d\n", dequeue_data(&sp));
    printf("Dequeue elemenet %d\n", dequeue_data(&sp));
    printf("Dequeue elemenet %d\n", dequeue_data(&sp));
    printf("Dequeue elemenet %d\n", dequeue_data(&sp));

    printf("Queue is Empty %d\n", is_empty(&sp));
    printf("Queue is Full %d\n", is_full(&sp));
    // printf("%d, %d\n", sp.start, sp.top);

    for (int i = sp.start + 1; i < sp.top; i++)
    {
        if (sp.arr[i])
        {
            printf("%d\n", sp.arr[i]);
        }
    }

    return 0;
}

