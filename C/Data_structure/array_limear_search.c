#include <stdio.h>
#include <stdlib.h>


int linearsearch(int arr[], int size, int element)
{   
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            break;
        }
        count += 1;
    }
    printf("THE INDEX OF THE ARRAY FOR THE GIVEN %d", count);
}


// for linear search array can be sorted or unsorted doesnt matter
// the time complexity is O(n)
// as in linear search it will transverse through the array of each element
int main(){
    int arr[10] = {3,1,5,7,9,2, 14, 23, 19};
    int element = 1;
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("THE SIZE OF THE ARRAY IS %d\n", size);
    linearsearch(arr, size, element);

}
