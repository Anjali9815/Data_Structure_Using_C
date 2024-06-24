#include <stdio.h>
#include <stdlib.h>


void displaay(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
}


int main()
{
    int * ptr;
    int n;
    printf("Enter the Size of array ");
    scanf("%d", &n);
    ptr = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d ");
        scanf("%d", &ptr[i]);
    }
    displaay(ptr, n);



    // using realloc to increase/decrease or modify the old array as per the requirement
    int m;
    printf("\nEneter the new size of the array ");
    scanf("%d", &m);
    ptr = (int *) realloc(ptr, m * sizeof(int));

    for (int i = 0; i < m; i++)
    {
        printf("Enter value for %d as ");
        scanf("%d", &ptr[i]);
    }
    printf("The new array is : ");
    displaay(ptr, m);

}