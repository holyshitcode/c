#include <stdio.h>

void clfrb(void) //clear line from read buffer = clear \0
{
	while (getchar() != '\n');
}

int main(void)
{
	char perID[7];
	char name[10];

	fputs("�ֹε�Ϲ�ȣ �� 6�ڸ� �Է�:", stdout);
	fgets(perID, sizeof(perID), stdin);
	clfrb();

	fputs("�̸� �Է�:", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹε�Ϲ�ȣ:%s\n", perID);
	printf("�̸�: %s\n", name);
	return 0;
}