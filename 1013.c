#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int A, B, C, X;

	scanf("%d %d %d", &A, &B, &C);

	X = (A + B + abs(A - B))/2;

	if(X > C){
		printf("%d eh o maior\n", X);
	} else 
		if(C > X){
		printf("%d eh o maior\n", C);
	}

	return 0;


}
