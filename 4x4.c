#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void Rotate(int(*square)[4]);
void Showarr(int(*square)[4]);

int main(void)
{
    int square[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d", square[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        Rotate(square);
        Showarr(square);
    }
    return 0;

}
void Showarr(int(*square)[4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) {
            printf(" %d", square[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}
void Rotate(int(*square)[4])
{
    int Temp[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            Temp[j][3 - i] = square[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            square[i][j] = Temp[i][j];
        }
    }

}
