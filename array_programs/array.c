#include <stdio.h>
#include <stdlib.h>

void transversal1(int arr[10], int size)
{   
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void insert(int arr[100], int size, int pos, int value)
{
    for (int i = size -1; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
}

void delete(int arr[100], int size, int pos)
{
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
}


int main() {
    int araay[10] = {3, 5, 8, 10, 15, 19};
    int size1 = sizeof(araay) / sizeof(araay[0]);
    int pos = 2;
    int del_pos = 1;
    int value = 34; 
    
    // printf("size of array %d \n", sizeof(araay));
    // printf("size of array %d \n", sizeof(araay[0]));
    printf("size of array %d \n", size1);
    printf("The size of array is %d\n", size1);
    transversal1(araay, size1);
    // printf("\ninsertion\n");
    insert(araay, size1, pos, value);
    transversal1(araay, size1);
    printf("DELETE \n");
    delete(araay, size1, del_pos);
    transversal1(araay, size1);
    
}

