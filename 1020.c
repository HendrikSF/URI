#include <stdio.h>

int main ()

{
	int X, A, M, D;

	scanf("%d", &X);

	A = X/365;
	M = (X%365)/30;
	D = (X%365)%30;

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", A, M, D);

	return 0;
}
