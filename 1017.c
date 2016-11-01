#include <stdio.h>

int main ()
{
	int T, V;
	double G;

	scanf("%d %d", &T, &V);

	G = (T * V)/12.0;

	printf("%.3lf\n", G);

	return 0;
}
