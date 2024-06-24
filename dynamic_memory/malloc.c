#include <stdio.h>
#include <stdlib.h>

int display(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main (){
    int * ptr;
    int n;
    printf("enter the size of array");
    scanf("%d", &n);
    ptr = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d as ");
        scanf("%d", &ptr[i]);
    }
    display(ptr, n);
}
