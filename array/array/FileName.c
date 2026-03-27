#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 선언
void f1();
void arrprint(int k[2][3]);

int main(void) {
    f1();   // 정상 호출
    return 0;
}

// 배열 만들고 출력하는 함수
void f1()
{
    int a[2][3] = { {4,5,6}, {7,8,9} };

    arrprint(a);   // 출력 함수 호출
}

// 배열 출력 함수
void arrprint(int k[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d ", k[i][j]);
        }
        printf("\n"); // 줄바꿈 추가
    }
}
