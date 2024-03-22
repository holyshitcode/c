#include <stdio.h>

void hol(int * num, int len)
{
    int count=0;
    for(int i=0; i<len; i++){
        if(num[i]%2 == 1){
            count++;
        }
    }
    printf("홀수출력:");

    for(int i=0; i<len; ++i){
        if(num[i]%2 == 1){
            count--;
            printf("%d",num[i]);
            if(count!=0){
                printf(", ");
            }
        }
    }
    printf("\n");
}
void jjak(int * num,int len)
{
	int count=0;
	for(int i=0; i<len; i++)
	{
		if(num[i]%2==0)
			count++;
	}
	printf("짝수출력: ");
	for(int i=0; i<len; i++)
	{
		if(num[i]%2 == 0)
		{
			count--;
			printf("%d", num[i]);
			if(count!=0)
				printf(", ");
		}
	} 
}

int main(void)
{
    int num[10];

    printf("총 10개의 숫자 입력해주세요\n");
    for(int i=0; i<10; i++){
        printf("입력:");
        scanf("%d",&num[i]);
    }
    hol(num,sizeof(num)/sizeof(int));
    jjak(num,sizeof(num)/sizeof(int));
}