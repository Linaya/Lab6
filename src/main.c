#include <stdio.h>
#include "app.h"

int main()
{
	double a, b, c, d, x1, x2;
	int koren;
	printf("vvedite a b c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	koren = uravn(a, b, c, &d, &x1, &x2);
	if (koren == -1)
	{
        printf("A dolzhen byt ne raven nulyu.\n");
		return 0;
	}

	printf("D: %lf\n", d);

	if (koren == 0)
		printf("Korney net.\n");
	else if (koren == 1)
		printf("X: %lf\n", x1);
    else
    {
        printf("X1: %lf\n", x1);
        printf("X2: %lf\n", x2);
    }
    
    return 0;
}
