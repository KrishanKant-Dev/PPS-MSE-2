// Complexity: O(log n)

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 40;
    int low = 0, high = 4, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Found at position %d", mid + 1);
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Not Found");
    return 0;
}