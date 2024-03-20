#include <stdio.h>
#pragma warning (disable:4996)

struct tables {
    char name[30]; int age; float height;
}onec;


int main()
{
    struct tables one = { "김준영", 26, 187.5 };
    
    printf("%s %d %4.1f", one.name, one.age, one.height);
    return 0;
}