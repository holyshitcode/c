#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int testsc;
	scanf("%d", &testsc);

	if(89 < testsc) {
		printf("A");
	}
	else if(79 < testsc) {
		printf("B");
	}
	else if(69 < testsc) {
		printf("C");
	}
	else if (59 < testsc) {
		printf("D");
	}
	else {
		printf("F");
	}
	return 0;
	
}