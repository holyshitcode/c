#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 100
int main(void)
{
    FILE *fp;
    char in;
    fp = fopen("abc.txt", "r");
    char str[MAX];
   in=getchar();
   getchar();
    
    if (in = 12) 
        while (feof(fp) ==0){
            char str[MAX];
            fgets(str, MAX, fp);
        printf("%s", str);
        
    }
  else{
         printf(“대문자 a를 입력하세요“);}
         return 0;
}