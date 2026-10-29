#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter roll number, name and marks: ");
        scanf("%d %49s %f", &s[i].rollno, s[i].name, &s[i].marks);
    }

    printf("\nStudent Details:\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d %s %.2f\n", s[i].rollno, s[i].name, s[i].marks);
    }

    return 0;
}