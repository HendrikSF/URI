#include <stdio.h>

int main ()
{
	char N[20];
	double S, V, T;

	scanf("%s %lf %lf", N, &S, &V);

	T = ((V/100)*15) + S;

	printf("TOTAL = R$ %.2lf\n", T);

	return 0;

}
