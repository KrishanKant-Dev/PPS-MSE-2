#include <stdio.h>

void change(int *x)
{
    *x = *x + 10;
}

int main()
{
    int a = 5;
    printf("Original Value: %d\n", a);
    change(&a);
    printf("Updated value: %d", a);
    return 0;
}