#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    char name[30] = "김준영";
    int age = 26;
    float height = 187.5 ;
    int egg = 1;
    printf("이름은=%s 나이는=%d 키는=%.1f\n", name, age, height);
    
    while (height == 187.5) {
        if (egg == 1) {
            printf("바꿀 이름을 적어주세요\n");
            scanf("%s", name);
            egg = 2;
            printf("이름변경완료=%s\n", name);
        }
        else if (egg == 2) {
            printf("바꿀 나이를 적어주세요\n");
            scanf("%d", &age);
            egg = 3;
            printf("나이변경완료=%d\n", age);
        }
        else if (egg == 3) {
            printf("바꿀 키를 적어주세요\n");
            scanf("%f", &height);
            egg = 4;
            printf("키변경완료=%.1f\n", height);
            break;
        }
    }
    printf("이름은 %s 나이는 %d 키는 %.1f", name, age, height);

    return 0;
}