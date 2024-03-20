#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{
	int A, B, C;
	scanf("%d %d %d",&A,&B,&C);
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A*B) % C);
	printf("%d\n", ((A % C) *(B % C)) % C);
	return 0;
}