#include <stdio.h>
#include <stdlib.h>


void display_Array(int arr[], int n)
{
    for (int i = 0; i<= n; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the size of array ");
    scanf("%d", &n);

    int * ptr;
    ptr = (int *) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d value ");
        scanf("%d", &ptr[i]);
    }
    display_Array(ptr, n);
}
