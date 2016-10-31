#include <stdio.h>

int main ()
{
	int C1, C2, N1, N2;
	double V1, V2, T, X, Y;

	scanf("%d %d %lf", &C1, &N1, &V1);
		X = N1 * V1;

	
	scanf("%d %d %lf", &C2, &N2, &V2);
		
		Y = N2 * V2;

		T = X + Y;

		printf("VALOR A PAGAR: R$ %.2lf\n", T);

		return 0;
}
