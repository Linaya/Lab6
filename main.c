#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, x1, x2;
    int koren;
    printf("vvedite a b c: ");
    scanf("%lf %lf %lf", a, b, c);
    
    if (a == 0)
    {
        printf("A dolzhen byt ne raven nulyu.\n");
        return -1;
    }
    d = (b * b) - (4 * a * c);
    if (d < 0)
    {
        printf("D: %lf\n", d);
        printf("Korney net.\n");
        return 0;
    }
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        printf("D: %lf\n", d);
        printf("X1: %lf\n", x1);
        return 1;
    }
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    printf("D: %lf\n", d);
    printf("X1: %lf\n", x1);
    printf("X2: %lf\n", x2);
    return 2;
}
