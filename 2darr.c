#include <stdio.h>

int main(void)
{
    int home[4][2];
    int popu, i, j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d층 %d호 인구수:", i+1, j+1);
            scanf("%d", &home[i][j]);
        }
    }


for(i=0; i<4; i++)
{
    popu=0;
    popu += home[i][0];
    popu += home[i][1];
    printf("%d층 인구수: %d \n", i+1, popu);
}
    return 0;
}