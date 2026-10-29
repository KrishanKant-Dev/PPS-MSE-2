#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("%d\n", *ptr);

    ptr++;
    printf("%d\n", *ptr);

    ptr = ptr + 2;
    printf("%d\n", *ptr);

    ptr--;
    printf("%d\n", *ptr);

    return 0;
}