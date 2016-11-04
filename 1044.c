#include <stdio.h>

int main()
{
	int A, B, M1;

	scanf("%d %d", &A, &B);

	if(A>B){
		M1 = A%B;
	} else
	     if(B>A){
	     	M1 = B%A;
	     }
	

	if(M1 == 0){
		printf("Sao Multiplos\n");
	}
	else{
		printf("Nao sao Multiplos\n");

	}

	return 0;

}