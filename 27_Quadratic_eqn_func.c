#include <stdio.h>
#include <math.h>

void roots(float a, float b, float c)
{
    float d, x1, x2;

    d = b * b - 4 * a * c;

    if(d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots = %.2f and %.2f", x1, x2);
    }
    else if(d == 0)
    {
        x1 = -b / (2 * a);
        printf("Equal roots = %.2f", x1);
    }
    else
    {
        printf("Roots are complex");
    }
}

int main()
{
    float a, b, c;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0)
        printf("Not a quadratic equation");
    else
        roots(a, b, c);

    return 0;
}