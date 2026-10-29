#include <stdio.h>
#include <string.h>

int main()
{
    char a[30] = "Hello";
    char b[30] = "World";
    char c[30];

    printf("Length = %d\n", strlen(a));

    strcpy(c, a);
    printf("Copied string = %s\n", c);

    strcat(a, b);
    printf("Joined string = %s\n", a);

    printf("Comparison = %d\n", strcmp(c, b));

    return 0;
}