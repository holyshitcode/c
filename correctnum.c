#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
    int answer = 5; int try = 0; char name[30]; char n;
    printf("이름을 입력해주세요\n");
    gets(name);
    printf("이게임은 숫자를 맞추는 게임입니다 1~10사이로 입력해주세요\n");


    while (answer != try) {
        scanf("%d", &try);
        if (try > 10) {
            printf("너무큽니다\n");
        }
        else if (3 < try < 5 || 8> try > 5) {
            printf("근삿값입니다\n");
        }
        else {
            printf("너무크거나 작습니다\n");
        }
    }
    printf("정답입니다 %s님\n", name);
        return 0;
}