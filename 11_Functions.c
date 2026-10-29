#include <stdio.h>

int add(int, int);       // Declaration

int add(int a, int b)    // Definition
{
    return a + b;
}

int main()
{
    int result;
    result = add(10, 20);  // Function call
    printf("Sum = %d", result);
    return 0;
}