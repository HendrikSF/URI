#include <stdio.h>
#include <math.h>

int main ()
{
	double R, Pi, T;
		Pi = 3.14159;

	scanf("%lf", &R);

	T = ((4/3.0) * Pi * pow(R,3));

	printf("VOLUME = %.3lf\n", T);

	return 0;



}
