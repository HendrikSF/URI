#include <stdio.h>

int main()
{
	int T, H, M, S;

	scanf("%d", &T);

	H = T/3600;

	M = (T%3600)/60;

	S = T%60;

	printf("%d:%d:%d\n", H, M, S);

	return 0;
}
