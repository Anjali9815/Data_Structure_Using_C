#include <stdio.h>
#include <stdlib.h>

void printarray(int * a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}


void bubble_sort(int * a, int n)
{
    int fg = 0;   
    for (int i = 0; i < n-1; i++)
    {
        fg = 1;
        printf("Pass %d\n", i+1);
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                fg = 0;
            }
        }
        if (fg)
        {
            return;
        }
    }
}



int main()
{
    // int a[] = {3,11, 7, 17, 5, 2, 13};
    int a[] = {15, 9, 4, 6, 3};
    int n = 5;
    printarray(a, n);
    bubble_sort(a, n);
    printarray(a, n);

    return 0;
}