#include <stdio.h>

int main ()
{
	int X;
	double Y, T;

	scanf("%d %lf", &X, &Y);

	T = X/Y;

	printf("%.3lf km/l\n", T);

	return 0;



}
