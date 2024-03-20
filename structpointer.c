#include <stdio.h>
#pragma warning (disable:4996)

struct tables {
    char name[30]; int age[1]; float height[1];
}*onec;


int main()
{
    struct tables one = { "김준영", 26, 187.5 }; 
    struct tables two = { "김준영", 26, 187.5 };
    while (*one.height == *two.height) {
        if (*two.name == *one.name) {
            printf("변경할 이름을 입력해주세요\n");
            scanf("%s", &two.name);
        
            
        }
        else if (*two.age == *one.age) {
            printf("나이를입력해주세요\n");
            scanf("%d", &two.age);
            
        }
        else if (*one.height == *two.height) {
            printf("키를 입력해주세요\n");
            scanf("%f", &two.height);
            
        }
    
    }
    printf("바뀐이름은 =%s \n바뀐나이는= %d\n 바뀐키는= %.1f", &two.name, *two.age, *two.height);
    return 0;
}