#include <stdio.h>

void change(int x)
{
    x = x + 10;
    printf("Inside function: %d\n", x);
}

int main()
{
    int a = 5;
    change(a);
    printf("Outside function: %d", a);
    return 0;
}