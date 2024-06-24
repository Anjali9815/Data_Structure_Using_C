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


//  my logic
void selection_sort(int * a, int n)
{
    for (int i = 0; i< n-1; i++)
    {
        printf("Pass no : %d\n", i+1);
        for (int j = i+1; j< n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }
}


void selection_sort1(int * a, int n)
{
    int min_idx;
    for (int i = 0; i< n-1; i++)
    {
        min_idx = i;
        printf("Pass no : %d\n", i+1);
        for (int j = i+1; j< n; j++)
        {
            if (a[min_idx] > a[j])
            {
                min_idx = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
        
    }
}



// 5 2 4 1
// i = 0, j = 1 to 3
// 2 5 4 1
// i = 1 j = 2 to 3



int main()
{
    int a[] = {3,7, 1,5, 2,13,  9, 8};
    // int a[] = {5,2,4,1};
    int n = 8;
    printf("Original Array ");
    printarray(a, n);

    printf("\nSELECTION SORT USING FOR LOOP..\n");
    selection_sort1(a, n);
    printarray(a, n);
}
