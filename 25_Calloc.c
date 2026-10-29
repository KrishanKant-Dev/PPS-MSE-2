#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i;

    ptr = calloc(4, sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory not allocated");
        return 1;
    }

    for(i = 0; i < 4; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}