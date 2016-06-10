#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, x1, x2;
    int koren;
    printf("vvedite a b c: ");
    scanf("%lf %lf %lf", a, b, c);
    
    if (a == 0)
        return -1;
    d = (b * b) - (4 * a * c);
    if (d < 0)
        return 0;
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        return 1;
    }
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    return 2;
}
