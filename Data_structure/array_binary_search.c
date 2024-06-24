#include <stdio.h>
#include <stdlib.h>


int binarysearch(int arr[], int size, int element)

{
    int low, high, mid;
    low = 0;
    high = size -1 ;  
    while (low <= high)
    {
        int mid = (low + high) /2;
        if (arr[mid] == element){
            return mid;
        }
        if  (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid -1;
        }
    }
    return -1;
}


// for Binary search array should be sorted always
// the time complexity is log (n)
int main(){
    int arr[10] = {3, 6, 8, 9, 11, 13, 17};
    int element = 11;
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("THE SIZE OF THE ARRAY IS %d\n", size);
    int ind = binarysearch(arr, size, element);
    printf("The index for the %d is %d", element, ind);

}
