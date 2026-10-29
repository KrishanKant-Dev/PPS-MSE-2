#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    // fgets(name, sizeof(name), stdin);
    scanf("%s", name);

    printf("Your name is: ");
    printf("%s", name);

    return 0;
}