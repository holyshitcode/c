#include <stdio.h>
#pragma warning (disable:4996)

struct tables {
    char name[30]; int age; float height;
}onec;


int main()
{
    struct tables one = { "김준영", 26, 187.5 }; 
    struct tables two = { "p", 26, 212 };
    printf("%s %d %4.1f\n", one.name, one.age, one.height);
    scanf("%s" , &two.name);
    printf("바뀐이름은 =%s",two.name);
    return 0;
}