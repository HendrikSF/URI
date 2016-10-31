#include <stdio.h>

int main()
{
	double A, B, C, aux, pi;
		pi = 3.14159;

	scanf("%lf %lf %lf", &A, &B, &C);

	aux = (A * C)/2;
		printf("TRIANGULO: %.3lf\n", aux);

	
	aux = pi * (C*C);
		printf("CIRCULO: %.3lf\n", aux);

	aux = ((A + B)*C)/2;
		printf("TRAPEZIO: %.3lf\n", aux);

	aux = B * B;
		printf("QUADRADO: %.3lf\n", aux);

	aux = A * B;
		printf("RETANGULO: %.3lf\n", aux);

	return 0;

}
