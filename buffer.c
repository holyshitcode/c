#include <stdio.h>

void clfrb(void) //clear line from read buffer = clear \0
{
	while (getchar() != '\n');
}

int main(void)
{
	char perID[7];
	char name[10];

	fputs("주민등록번호 앞 6자리 입력:", stdout);
	fgets(perID, sizeof(perID), stdin);
	clfrb();

	fputs("이름 입력:", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민등록번호:%s\n", perID);
	printf("이름: %s\n", name);
	return 0;
}