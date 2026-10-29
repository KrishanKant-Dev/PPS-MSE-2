#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = malloc(3 * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory not allocated");
        return 1;
    }

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);

    free(ptr);

    return 0;
}