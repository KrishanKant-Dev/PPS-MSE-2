#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;

    printf("Value = %d\n", num);
    printf("Address = %p\n", &num);
    printf("Pointer stores = %p\n", ptr);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}