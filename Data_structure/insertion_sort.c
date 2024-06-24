#include <stdio.h>
#include <stdlib.h>


void printarray(int * a, int n)
{
    for (int i = 0; i< n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}


void insertion_sort(int * a, int n)
{
    for (int i = 1; i< n-1; i++)
    {
        printf("PASS Number : %d\n", i);
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[i+1])
            {
                int temp = a[j];
                a[j] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}


void insertion_sort_while(int * a, int n)
{
    for (int i = 1; i< n-1; i++)
    {
        printf("Passs %d\n", i);
        int key = a[i];
        int j = i-1;
        while(j >=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main()
{
    // int a[] = {3,7, 1,5, 2,13,  9, 8};
    int a[] = {1,2,4,8};
    int n = 4;
    printf("Original Array ");
    printarray(a, n);

    printf("\nINSERT SORT USING FOR LOOP..\n");
    insertion_sort(a, n);
    printarray(a, n);

    printf("\nINSERT SORT USING WHILE LOOP..\n");
    insertion_sort_while(a, n);
    printarray(a, n);
    return 0;
}