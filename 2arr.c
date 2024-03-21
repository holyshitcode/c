#include <stdio.h>

int main(void)
{
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
int i;

for(i=0; i<=9; ++i){
    printf(" %d", arr[i]);
}

printf("\n");
printf("위값은 arr배열안에있는 숫자\n");
return 0;
}