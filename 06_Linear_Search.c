// Complexity: O(n)

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30, i;

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            printf("Found at position %d", i + 1);
            return 0;
        }
    }

    printf("Not Found");
    return 0;
}