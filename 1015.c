#include <stdio.h>
#include <math.h>

int main ()
{
	double x1, x2, y1, y2, aux;

	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

	aux = pow(x2 - x1,2) + pow(y2 - y1,2);

	aux = sqrt(aux);

	printf("%.4lf\n", aux);

	return 0;
}
