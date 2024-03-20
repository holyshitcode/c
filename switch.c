#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int num;
	num = 0;
	printf("1~5사이의 숫자를 입력하시오\n");
	scanf("%d", &num);

	switch (num) {

	case 1:
		printf("1은 일\n");
		break;
	case 2:
		printf("2는 이\n");
		break;
	case 3:
		printf("3은 삼\n");
		break;
	case 4:
		printf("4는 사\n");
		break;
	case 5:
		printf("5는 오\n");
		break;
	default:
		printf("1부터 5까지만 입력하라구");
	}
	return 0;

}