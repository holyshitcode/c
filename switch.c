#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int num;
	num = 0;
	printf("1~5������ ���ڸ� �Է��Ͻÿ�\n");
	scanf("%d", &num);

	switch (num) {

	case 1:
		printf("1�� ��\n");
		break;
	case 2:
		printf("2�� ��\n");
		break;
	case 3:
		printf("3�� ��\n");
		break;
	case 4:
		printf("4�� ��\n");
		break;
	case 5:
		printf("5�� ��\n");
		break;
	default:
		printf("1���� 5������ �Է��϶�");
	}
	return 0;

}