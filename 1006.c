#include <stdio.h>

int main ()
{
	double A, B, C, S;

	scanf("%lf %lf %lf", &A, &B, &C);

	S = ((A * 2) + (B * 3) + (C * 5))/10;

	printf("MEDIA = %.1lf\n", S);

	return 0;
}
